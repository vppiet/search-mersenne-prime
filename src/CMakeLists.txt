add_executable(search_mersenne_prime
        main.cpp
        MersennePrimer.cpp
        MersennePrimer.h)
target_link_libraries(search_mersenne_prime Boost::program_options)
