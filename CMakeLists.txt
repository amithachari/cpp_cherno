cmake_minimum_required(VERSION 3.20.0)
# set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
project(HELLO)

# find_package(ryml CONFIG REQUIRED)
# add_executable(HELLO cpp_cherno.cpp)
# # find_package(plog CONFIG REQUIRED)
# # target_link_libraries(HELLO PRIVATE plog::plog)
# target_include_directories(HELLO PRIVATE ${RYML_INCLUDE_DIRS})
# target_link_libraries(HELLO PRIVATE ryml:ryml)


find_package(plog CONFIG REQUIRED)
add_executable(HELLO cpp_cherno.cpp)
target_link_libraries(HELLO PRIVATE plog::plog)

# cmake .. -DCMAKE_TOOLCHAIN_FILE=C:/Users/amith/vcpkg/scripts/buildsystems/vcpkg.cmake