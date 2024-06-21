cmake_minimum_required(VERSION 3.26)
project(Wydarzenia)

set(CMAKE_CXX_STANDARD 17)

add_executable(Wydarzenia main.cpp
        event.cpp
        event.h
)
