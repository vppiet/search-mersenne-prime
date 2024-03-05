#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main() {
  po::options_description desc("Allowed options");
  desc.add_options()
      ("help", "This program finds Mersenne primes for some given integer n.")
      ("limit", "Limit the search to an integer n (in 2^n-1).");

  return 0;
}
