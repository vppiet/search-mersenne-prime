#include "MersennePrimer.h"
#include <gmpxx.h>
#include <iostream>

// Tests if p in 2^p - 1 results in an odd prime (p > 2)
// https://en.wikipedia.org/wiki/Lucas%E2%80%93Lehmer_primality_test
bool MersennePrimer::is_ll_prime(const unsigned int p) {
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
  mpz_ui_pow_ui(M, 2, p); // consider memory exhaustion
  mpz_sub_ui(M, M, 1);

  unsigned int cycles{p - 2};

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

void MersennePrimer::run(unsigned int max_p) {
  std::cout << "Running primer with max p = " << max_p << "\n";
  std::cout << std::boolalpha;

  for (int i = 0; i <= max_p; ++i) {

    bool is_prime = MersennePrimer::is_ll_prime(i);

    if (is_prime) {
      std::cout << i << "\n";
    }
  }

  std::cout << std::flush;
}
