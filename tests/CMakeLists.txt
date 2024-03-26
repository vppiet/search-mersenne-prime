find_package(GTest REQUIRED)
enable_testing()

add_executable(MersennePrimer_test MersennePrimer_test.cpp)
target_link_libraries(MersennePrimer_test libmersenneprimer GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(MersennePrimer_test)
