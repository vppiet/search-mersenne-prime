cmake_minimum_required(VERSION 3.16)
project(search_mersenne_prime)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost REQUIRED COMPONENTS program_options)

add_executable(search_mersenne_prime main.cpp)
