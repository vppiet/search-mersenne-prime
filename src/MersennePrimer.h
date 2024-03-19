#ifndef PRIMER_H
#define PRIMER_H

class MersennePrimer {
  unsigned int n;

public:
  explicit MersennePrimer(unsigned int n);
  static int calc(unsigned int x, unsigned int n);
  static bool is_prime(int x);
  void run() const;
};

#endif //PRIMER_H
