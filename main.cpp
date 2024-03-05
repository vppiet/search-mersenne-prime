#include <iostream>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main(const int ac, char *av[]) {
  try {
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "This program finds Mersenne primes for some given integer n.")
        ("n", "Limit the search to an integer n (in 2^n-1).");

    po::variables_map vm;
    store(parse_command_line(ac, av, desc), vm);
    notify(vm);

    if (vm.contains("help")) {
      std::cout << desc << "\n";
      return 0;
    }

    if (vm.contains("n")) {
      std::cout << "N was set to " << vm["n"].as<int>() << ".\n";
    } else {
      std::cout << "N was not set.\n";
    }
  } catch (std::exception &e) {
    std::cerr << "error: " << e.what() << "\n";
  } catch (...) {
    std::cerr << "Exception of unknown type!\n";
  }

  return 0;
}
