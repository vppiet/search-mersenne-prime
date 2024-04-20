#!/bin/sh

/usr/local/bin/cmake -DCMAKE_TOOLCHAIN_FILE=/usr/local/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_INSTALL_PREFIX=/workspaces/search-mersenne-prime/out/install/default -S/workspaces/search-mersenne-prime -B/workspaces/search-mersenne-prime/out/build/default -G Ninja
/usr/local/bin/cmake --build /workspaces/search-mersenne-prime/out/build/default --parallel 10 --target search_mersenne_prime
