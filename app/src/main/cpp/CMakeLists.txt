cmake_minimum_required(VERSION 3.10.2)
project("DawnSimpleTest")

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR})

# Add your native source code
add_library(
        DawnSimpleTest # Name of your native library
        SHARED
        dump_utils.cpp
        main.cpp # Change this to your source files
)

# Specify the libraries to link against
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/../jniLibs/${CMAKE_ANDROID_ARCH_ABI})
target_link_libraries(${CMAKE_PROJECT_NAME}
        # List libraries link to the target library
        webgpu_dawn
        dawn_native
        dawn_proc
        android
        log)