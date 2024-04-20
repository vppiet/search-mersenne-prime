#ifndef PRIMER_H
#define PRIMER_H

class MersennePrimer {
public:
  static bool is_ll_prime(unsigned int p);

  static void run(unsigned int max_p);

  ~MersennePrimer() = default;
};

#endif // PRIMER_H
