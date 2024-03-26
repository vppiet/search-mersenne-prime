#include "MersennePrimer.h"
#include <cmath>
#include <iostream>

MersennePrimer::MersennePrimer(const unsigned int n) : n{n} {}

// Tests if p in 2^p - 1 results in an odd prime (p > 2)
// https://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test
bool MersennePrimer::is_ll_prime(const unsigned int p) {
  if (p < 2) {
    return false;
  }

  if (p == 2) {
    return true;
  }

  unsigned long int s = 4;
  const unsigned int M = std::pow(2, p) - 1;
  unsigned int cycles{p - 2};

  while (cycles > 0) {
    s = (s * s - 2) % M;
    --cycles;
  }

  return s == 0;
}

void MersennePrimer::run() const {
  std::cout << "Running primer with n=" << n << "\n";
  // TODO: main loop
}
