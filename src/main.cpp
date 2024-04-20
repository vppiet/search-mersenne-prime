#include <iostream>
#include <boost/program_options.hpp>

#include "MersennePrimer.h"

namespace po = boost::program_options;

int main(const int ac, char *av[]) {
  try {
    po::options_description desc("Allowed options");

    unsigned int n{0};

    desc.add_options()
        ("help", "Display help message")
        ("n", po::value<unsigned int>(&n), "Limit the search to an integer n (in 2^n-1)");

    po::variables_map vm;
    store(parse_command_line(ac, av, desc), vm);
    notify(vm);

    if (vm.contains("help")) {
      std::cout << desc << "\n";
      return 0;
    }

    if (vm.contains("n")) {
      MersennePrimer::run(n);
    } else {
      std::cout << "N was not set; use --n <int>.\n";
    }
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  } catch (...) {
    std::cerr << "Exception of unknown type!\n";
    return 1;
  }

  return 0;
}
