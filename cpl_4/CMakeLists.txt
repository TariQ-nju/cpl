cmake_minimum_required(VERSION 3.29)
project(cpl_4-for-a-while )

set(CMAKE_C_STANDARD 17)

add_executable(primes primes.c)
add_executable(binary-search binary-search.c)
add_executable(digits-while digits-while.c)
add_executable(selection-sort selection-sort.c)
add_executable(palindrome palindrome.c)