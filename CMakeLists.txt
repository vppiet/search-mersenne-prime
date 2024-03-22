cmake_minimum_required(VERSION 3.27)
project(search_mersenne_prime)

set(CMAKE_CXX_STANDARD 20)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS program_options)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
