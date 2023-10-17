cmake_minimum_required(VERSION 3.26)
project(C_calculator C)

set(CMAKE_C_STANDARD 11)

add_executable(C_calculator main.c
        functions.h
        function.c)
