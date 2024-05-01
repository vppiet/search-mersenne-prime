set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS program_options)

add_executable(SearchMersennePrime main.cpp)
target_link_libraries(SearchMersennePrime Boost::program_options LibMersennePrimer)
target_include_directories(SearchMersennePrime SYSTEM PRIVATE ${Boost_INCLUDE_DIRS} {LibMersennePrimer_INCLUDE_DIRS})
