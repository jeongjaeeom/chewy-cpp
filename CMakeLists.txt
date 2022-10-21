cmake_minimum_required(VERSION 3.23)
project(chewy_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(chewy_cpp main.cpp)

add_executable(vector ch11/vector/vector.cpp)
add_executable(vector_erase ch11/vector/vector_erase.cpp)
add_executable(vector_const_iterator ch11/vector/vector_const_iterator.cpp)
add_executable(vector_reverse_iterator ch11/vector/vector_reverse_iterator.cpp)
add_executable(vector_range_based ch11/vector/vector_range_based.cpp)
add_executable(list_basic ch11/list/list_basic.cpp)
add_executable(deque_basic ch11/deque/deque_basic.cpp)
add_executable(set_basic ch11/set/set_basic.cpp)
add_executable(map_basic ch11/map/map_basic.cpp)
add_executable(map_empty_caution ch11/map/map_empty_caution.cpp)
add_executable(map_empty_find ch11/map/map_empty_find.cpp)