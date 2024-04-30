find_package(PkgConfig REQUIRED)
pkg_check_modules(gmpxx REQUIRED IMPORTED_TARGET gmpxx)

add_library(libmersenneprimer MersennePrimer.cpp)
target_link_libraries(libmersenneprimer PkgConfig::gmpxx)
target_include_directories(libmersenneprimer INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
