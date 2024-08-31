cmake_minimum_required(VERSION 3.10.2)
project("DawnSimpleTest")

set(CMAKE_CXX_STANDARD 14)
set(DAWN_BUILD_PATH "" CACHE PATH "Path to the Dawn build directory")

if(NOT DAWN_BUILD_PATH)
    message(FATAL_ERROR "Please specify the DAWN_BUILD_PATH using -DDAWN_BUILD_PATH=/path/to/dawn/build")
endif()

# Use DAWN_BUILD_PATH for include directories
include_directories("${DAWN_BUILD_PATH}/gen/include")

# Use DAWN_BUILD_PATH for the library path
set(LIBWEBGPU_DAWN_LIB "${DAWN_BUILD_PATH}/src/dawn/native/libwebgpu_dawn.a")

# Add your native source code
add_library(
        DawnSimpleTest # Name of your native library
        SHARED
        main.cpp # Change this to your source files
)

# Specify the libraries to link against
target_link_libraries(
        DawnSimpleTest
        ${LIBWEBGPU_DAWN_LIB}
)