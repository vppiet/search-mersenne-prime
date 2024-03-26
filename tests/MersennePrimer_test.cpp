#include <gtest/gtest.h>
#include "MersennePrimer.h"

TEST(MersennePrimerTest, CalcFormPositiveNumbers) {
  EXPECT_EQ(MersennePrimer::calc_form(3), 7);
}
