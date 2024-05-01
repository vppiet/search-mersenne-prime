find_package(PkgConfig REQUIRED)
pkg_check_modules(gmpxx REQUIRED IMPORTED_TARGET gmpxx)

add_library(LibMersennePrimer MersennePrimer.cpp)
target_link_libraries(LibMersennePrimer PkgConfig::gmpxx)
target_include_directories(LibMersennePrimer INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
