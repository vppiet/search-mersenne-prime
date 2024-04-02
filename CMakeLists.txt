cmake_minimum_required(VERSION 3.16)
project(search_mersenne_prime CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(tests)
