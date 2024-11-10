cmake_minimum_required(VERSION 3.29)
project(cpl_2-types C)

set(CMAKE_CXX_STANDARD 17)

add_executable(circle circle.cpp)
add_executable(mol mol.cpp)
add_executable(sphere sphere.cpp)
target_link_libraries(sphere m)
