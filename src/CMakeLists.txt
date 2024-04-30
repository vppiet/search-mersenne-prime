set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS program_options)

add_executable(search_mersenne_prime main.cpp)
target_link_libraries(search_mersenne_prime Boost::program_options libmersenneprimer)
target_include_directories(search_mersenne_prime SYSTEM PRIVATE ${Boost_INCLUDE_DIRS} {libmersenneprimer_INCLUDE_DIRS})
