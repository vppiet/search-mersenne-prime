FROM mcr.microsoft.com/devcontainers/cpp:1-debian-12

ARG REINSTALL_CMAKE_VERSION_FROM_SOURCE="3.22.2"

COPY ./reinstall-cmake.sh /tmp/

RUN if [ "${REINSTALL_CMAKE_VERSION_FROM_SOURCE}" != "none" ]; then \
  chmod +x /tmp/reinstall-cmake.sh && /tmp/reinstall-cmake.sh ${REINSTALL_CMAKE_VERSION_FROM_SOURCE}; \
  fi \
  && rm -f /tmp/reinstall-cmake.sh

# install autoconf required by gmp
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
  && apt-get -y install --no-install-recommends automake libtool

COPY ./vcpkg.json /tmp/vcpkg/
RUN su vscode -c "${VCPKG_ROOT}/vcpkg install --x-manifest-root=/tmp/vcpkg"
