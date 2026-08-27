cmake_minimum_required(VERSION 3.31.6)
project(vallemu)

set(CMAKE_CXX_STANDARD 26)

add_executable(vallemu
        src/main.cpp
        src/vallemu/gb/bus.h
        src/vallemu/gb/bus.cpp
)
