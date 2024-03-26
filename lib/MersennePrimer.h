#ifndef PRIMER_H
#define PRIMER_H

class MersennePrimer {
  unsigned int n;

public:
  explicit MersennePrimer(unsigned int n);

  static int calc_form(unsigned int n);

  static bool is_prime(int x);

  void run() const;

  ~MersennePrimer() = default;
};

#endif //PRIMER_H
