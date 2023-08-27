cmake_minimum_required(VERSION 3.20.0)
# set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
project(HELLO)
add_executable(HELLO cpp_cherno.cpp)
find_package(ryml CONFIG REQUIRED)
target_link_directories(HELLO PRIVATE ryml:ryml)

# cmake .. -DCMAKE_TOOLCHAIN_FILE=C:/Users/amith/vcpkg/scripts/buildsystems/vcpkg.cmake