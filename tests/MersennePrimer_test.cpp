#include <gtest/gtest.h>
#include "MersennePrimer.h"

TEST(MersennePrimerTest, IsPrimePrimes) {
  EXPECT_TRUE(MersennePrimer::is_ll_prime(2));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(3));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(5));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(7));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(13));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(17));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(19));
  EXPECT_TRUE(MersennePrimer::is_ll_prime(31));
}

TEST(MersennePrimerTest, IsPrimeNonPrimes) {
  EXPECT_FALSE(MersennePrimer::is_ll_prime(1));
  EXPECT_FALSE(MersennePrimer::is_ll_prime(4));
  EXPECT_FALSE(MersennePrimer::is_ll_prime(9));
  EXPECT_FALSE(MersennePrimer::is_ll_prime(11));
  EXPECT_FALSE(MersennePrimer::is_ll_prime(23));
}
