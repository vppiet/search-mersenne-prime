# syntax=docker/dockerfile:1

FROM alpine:3.19.1 AS base

WORKDIR /usr/local/src
RUN apk add --no-cache build-base cmake gdb

FROM base AS build-boost
RUN apk add --no-cache wget \
  && wget https://boostorg.jfrog.io/artifactory/main/release/1.84.0/source/boost_1_84_0.tar.gz \
  && tar -zxf /usr/local/src/boost_1_84_0.tar.gz
RUN cd boost_1_84_0 \
  && ./bootstrap.sh --with-libraries=program_options \
  && ./b2 --build-dir=/tmp/build-boost toolset=gcc install

FROM base AS build-gtest
RUN apk add --no-cache git \
  && git clone https://github.com/google/googletest.git -b v1.14.0
RUN cd googletest \
  && mkdir build \
  && cd build \
  && cmake .. \
  && make install

FROM base AS final
COPY --from=build-boost /usr/local/lib /usr/local/lib
COPY --from=build-boost /usr/local/include /usr/local/include
COPY --from=build-gtest /usr/local/lib /usr/local/lib
COPY --from=build-gtest /usr/local/include /usr/local/include
