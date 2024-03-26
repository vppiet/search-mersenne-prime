#include "MersennePrimer.h"
#include <cmath>
#include <iostream>

MersennePrimer::MersennePrimer(const unsigned int n)
  : n{n} {
}

int MersennePrimer::calc_form(const unsigned int n) {
  return std::pow(2, n) - 1;
}

bool MersennePrimer::is_prime(int x) {
  // TODO: Lucas-Lehmer primality test
  return false;
}

void MersennePrimer::run() const {
  std::cout << "Running primer with n=" << n << "\n";
  // TODO: main loop
}
