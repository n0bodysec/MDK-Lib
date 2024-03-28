#pragma once

#include "singleton.h"
#include <charconv>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string>
#include <sys/uio.h>
#include <vector>

struct MemoryRegion
{
	std::string name;
	uintptr_t startAddress;
	uintptr_t endAddress;
};

class Memory : public Singleton<Memory>
{
public:
	pid_t pid = 0;
	std::vector<MemoryRegion> regions;

public:
	bool IsReady()
	{
		return pid != 0;
	}

	pid_t GetPid(std::string processName)
	{
		if (IsReady()) return pid;

		for (const auto& Entry : std::filesystem::directory_iterator("/proc"))
		{
			if (!Entry.is_directory()) continue;

			std::ifstream CommandFile(std::string(Entry.path()) + "/cmdline");
			std::string CommandLine;
			std::getline(CommandFile, CommandLine);

			if (CommandLine.find(processName) != std::string::npos)
			{
				pid = std::stoi(Entry.path().filename());
				break;
			}
		}

		return pid;
	}

	size_t GetMemoryRegions()
	{
		if (!IsReady()) throw std::runtime_error("Failed to fetch maps for the provided pid");

		std::ifstream mapsFile("/proc/" + std::to_string(pid) + "/maps");
		if (!mapsFile.is_open()) throw std::runtime_error("Could not open maps file");

		regions.clear();

		std::string line;
		while (std::getline(mapsFile, line))
		{
			MemoryRegion region;
			if (std::sscanf(line.c_str(), "%lx-%lx %*4s", &region.startAddress, &region.endAddress) != 2) continue;

			size_t pos = line.find_first_of("/[");
			region.name = pos != std::string::npos ? line.substr(pos) : "[anonymous]";

			regions.push_back(region);
		}

		mapsFile.close();
		return regions.size();
	}

	uintptr_t GetBaseAddress()
	{
		if (!IsReady()) return 0x00;
		if (regions.size() > 0) return regions[0].startAddress;

		std::ifstream mapsFile("/proc/" + std::to_string(pid) + "/maps");
		if (!mapsFile.is_open()) return 0x00;

		std::string line;
		if (!std::getline(mapsFile, line))
		{
			mapsFile.close();
			return 0x00;
		}

		uintptr_t address = 0;
		auto result = std::from_chars(line.data(), line.data() + line.size(), address, 16);
		if (result.ec != std::errc())
		{
			mapsFile.close();
			return 0x00;
		}

		mapsFile.close();
		return address;
	}

	template<typename T>
	T Read(uintptr_t address, size_t len = sizeof(T), ssize_t* outBytes = nullptr)
	{
		if (len <= 0) throw std::out_of_range("Len must be greater than 0");

		T result;
		struct iovec local = { &result, len };
		struct iovec remote = { reinterpret_cast<void*>(address), len };

		ssize_t bytesRead = process_vm_readv(pid, &local, 1, &remote, 1, 0);

		if (bytesRead != static_cast<ssize_t>(len)) throw std::runtime_error("Cannot read memory");

		if (outBytes) *outBytes = bytesRead;

		return result;
	}

	template<typename T>
	void Read(uintptr_t address, T* buffer, size_t len)
	{
		*buffer = Read<T>(address, len);
	}

	template<typename T>
	void Write(uintptr_t address, T value, size_t len = sizeof(T), ssize_t* outBytes = nullptr)
	{
		if (len <= 0) throw std::out_of_range("Len must be greater than 0");

		struct iovec local = { &value, len };
		struct iovec remote = { reinterpret_cast<void*>(address), len };

		ssize_t bytesWritten = process_vm_writev(pid, &local, 1, &remote, 1, 0);

		if (bytesWritten != static_cast<ssize_t>(len)) throw std::runtime_error("Cannot write memory");

		if (outBytes) *outBytes = bytesWritten;
	}

	std::string ReadString(uintptr_t address)
	{
		size_t size = sizeof(std::string);
		std::vector<char> buffer(size, 0);

		return Read<std::string>(address, size);
	}

	std::string ReadString(uintptr_t address, size_t size)
	{
		std::vector<char> buffer(size, 0);

		return Read<std::string>(address, size);
	}
};
