#ifndef PRIMER_H
#define PRIMER_H

class MersennePrimer {
private:
  unsigned int n;

public:
  explicit MersennePrimer(unsigned int n);

  static bool is_ll_prime(unsigned int p);

  void run() const;

  ~MersennePrimer() = default;
};

#endif // PRIMER_H
