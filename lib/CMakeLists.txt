set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost CONFIG REQUIRED COMPONENTS program_options)

find_package(PkgConfig REQUIRED)
pkg_check_modules(gmpxx REQUIRED IMPORTED_TARGET gmpxx)

add_library(libmersenneprimer MersennePrimer.cpp)
target_link_libraries(libmersenneprimer Boost::program_options PkgConfig::gmpxx)
target_include_directories(libmersenneprimer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
