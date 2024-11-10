cmake_minimum_required(VERSION 3.29)
project(cpl_5_loops C)

set(CMAKE_C_STANDARD 17)

add_executable(game-of-life game-of-life.c)
add_executable(merge merge.c)
add_executable(insertion-sort insertion-sort.c)