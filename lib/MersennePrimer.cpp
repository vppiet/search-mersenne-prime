#include "MersennePrimer.h"
#include <gmpxx.h>
#include <iostream>

MersennePrimer::MersennePrimer(const unsigned int n) : n{n} {}

// Tests if p in 2^p - 1 results in an odd prime (p > 2)
// https://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test
bool MersennePrimer::is_ll_prime(const unsigned int p) { // TODO: change to str
  if (p < 2) {
    return false;
  }

  if (p == 2) {
    return true;
  }

  mpz_t s;
  mpz_init_set_ui(s, 4);

  mpz_t M;
  mpz_init(M);
  mpz_ui_pow_ui(M, 2, p);   // consider memory exhaustion
  mpz_sub_ui(M, M, 1);

  unsigned int cycles{p - 2}; // TODO: change to mpz_t?

  while (cycles > 0) {
    mpz_mul(s, s, s);
    mpz_sub_ui(s, s, 2);
    mpz_mod(s, s, M);
    --cycles;
  }

  const bool is_zero{mpz_sgn(s) == 0};
  mpz_clear(s);
  mpz_clear(M);

  return is_zero;
}

void MersennePrimer::run() const {
  std::cout << "Running primer with n=" << n << "\n";
  // TODO: main loop
}
