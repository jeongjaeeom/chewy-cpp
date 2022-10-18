cmake_minimum_required(VERSION 3.23)
project(chewy_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(chewy_cpp main.cpp)

add_executable(vector ch11/vector.cpp)
add_executable(vector_erase ch11/vector_erase.cpp)
add_executable(vector_const_iterator ch11/vector_const_iterator.cpp)
add_executable(vector_reverse_iterator ch11/vector_reverse_iterator.cpp)
add_executable(vector_range_based ch11/vector_range_based.cpp)
add_executable(list_basic ch11/list_basic.cpp)