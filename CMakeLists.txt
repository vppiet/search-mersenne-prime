cmake_minimum_required(VERSION 3.16)
project(search_mersenne_prime CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(src)

add_subdirectory(lib)
add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
