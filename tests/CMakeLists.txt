find_package(GTest CONFIG REQUIRED)

add_executable(LibMersennePrimer_test LibMersennePrimer_test.cpp)
target_link_libraries(LibMersennePrimer_test PRIVATE LibMersennePrimer GTest::gtest GTest::gtest_main)

add_test(AllTests LibMersennePrimer_test)
