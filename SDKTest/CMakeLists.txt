cmake_minimum_required(VERSION 3.12)
project(SDKTest)

set(PROJECT_NAME SDKTest)

# Set C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files
set(SOURCES
    MDK.cpp
    SDKTest.cpp
)

# Header files
set(HEADERS
    MDK.h
    Memory.h
    Singleton.h
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# Compiler options
target_compile_options(${PROJECT_NAME} PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Add definitions
target_compile_definitions(${PROJECT_NAME} PRIVATE
    "__forceinline=__attribute__((always_inline))"
)

# Set debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG -O3")

# Set specific flags for x64 architecture
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    target_compile_options(${PROJECT_NAME} PRIVATE
        -m64
    )
else()
    target_compile_options(${PROJECT_NAME} PRIVATE
        -m32
    )
endif()
