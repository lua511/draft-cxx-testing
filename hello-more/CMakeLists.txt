cmake_minimum_required (VERSION 2.6)
project (HelloMore)

set (CMAKE_CXX_STANDARD 11)
include_directories(members)

add_executable(more4.bin source1.cpp members/more.cpp)