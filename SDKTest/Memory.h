#pragma once

#include "singleton.h"
#include <cstdint>
#include <stdexcept>
#include <string>
#include <sys/uio.h>
#include <vector>

class Memory : public Singleton<Memory>
{
public:
	pid_t pid = 0;

public:
	// TODO: add GetBaseAddres(), GetPid()

	bool IsReady()
	{
		return pid != 0;
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
