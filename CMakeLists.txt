cmake_minimum_required(VERSION 3.24)
project(Timezone_Calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Timezone_Calculator
        main.cpp functions.cpp functions.h)
