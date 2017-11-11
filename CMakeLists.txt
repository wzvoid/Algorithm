cmake_minimum_required(VERSION 3.6)
project(Algorithm)

set(CMAKE_CXX_STANDARD 11)


SET(CMAKE_C_COMPILER "/usr/bin/gcc-7")
SET(CMAKE_CXX_COMPILER "/usr/bin/g++-7")

set(SOURCE_FILES "Contains Duplicate/main.cpp")
add_executable(Algorithm ${SOURCE_FILES})