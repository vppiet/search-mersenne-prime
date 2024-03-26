set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost REQUIRED COMPONENTS program_options)

add_library(libmersenneprimer MersennePrimer.cpp)
target_link_libraries(libmersenneprimer Boost::program_options)
target_include_directories(libmersenneprimer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
