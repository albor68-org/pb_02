cmake_minimum_required(VERSION 3.22)

project(ch05 LANGUAGES CXX)

add_executable(mod
    mod.cpp
    grade.cpp
    median.cpp
    student_info.cpp
)

add_subdirectory(tests)
