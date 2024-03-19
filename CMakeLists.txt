cmake_minimum_required(VERSION 3.16)
project(search_mersenne_prime)

set(CMAKE_CXX_STANDARD 20)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED OFF)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS program_options)

add_executable(search_mersenne_prime src/main.cpp
        src/MersennePrimer.cpp
        src/MersennePrimer.h)
target_link_libraries(search_mersenne_prime Boost::program_options)
