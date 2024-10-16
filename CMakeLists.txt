cmake_minimum_required(VERSION 3.29)
project(automation_framework)

set(CMAKE_CXX_STANDARD 20)

add_executable(automation_framework
        include/comparator.h
        include/csvfile.h
        src/comparator.cpp
        src/csvfile.cpp
        test/csv_comparator_test.cpp)
