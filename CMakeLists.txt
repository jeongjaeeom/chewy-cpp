cmake_minimum_required(VERSION 3.23)
project(chewy_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(chewy_cpp main.cpp)

add_executable(vector ch11/vector.cpp)
add_executable(vector_erase ch11/vector_erase.cpp)