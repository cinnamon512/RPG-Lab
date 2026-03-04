cmake_minimum_required(VERSION 4.1)
project(ConsoleRPG)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleRPG main.cpp
        Player.cpp
        Player.h)
