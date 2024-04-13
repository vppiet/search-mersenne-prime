find_package(GTest CONFIG REQUIRED)

add_executable(MersennePrimer_test MersennePrimer_test.cpp)
target_link_libraries(MersennePrimer_test libmersenneprimer GTest::gtest_main)

include(GoogleTest)
add_test(AllTests MersennePrimer_test)
