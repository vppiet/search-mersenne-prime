# syntax=docker/dockerfile:1

FROM ubuntu:22.04 AS base

WORKDIR /usr/local/src
RUN apt update && \
    apt install -y build-essential cmake libboost-program-options-dev pkg-config libgmp-dev gdb git

FROM base AS build-gtest
RUN git clone -b v1.14.0 --depth 1 https://github.com/google/googletest.git /tmp/googletest && \
    cd /tmp/googletest && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make install

FROM base AS final
COPY --from=build-gtest /usr/local /usr/local
