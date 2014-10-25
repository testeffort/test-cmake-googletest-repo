project("CMake basic project")
cmake_minimum_required(VERSION 2.8.12)

include_directories(src)

add_subdirectory(src)
add_subdirectory(gtest-1.7.0)
add_subdirectory(test)
