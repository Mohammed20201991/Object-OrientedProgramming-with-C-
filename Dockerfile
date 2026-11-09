
# ==========================================
# OOP C++ Development Environment
# Base: Ubuntu 24.04 LTS
# ==========================================

FROM ubuntu:24.04

LABEL maintainer="Mohammed A.S. Al-Hitawi"
LABEL description="C++ OOP Teaching and Development Environment"

ENV DEBIAN_FRONTEND=noninteractive

# Install development tools
RUN apt-get update && apt-get install -y \
    build-essential \
    g++ \
    gcc \
    gdb \
    cmake \
    make \
    git \
    valgrind \
    clang \
    clang-format \
    nano \
    vim \
    wget \
    curl \
    zip \
    unzip \
    && rm -rf /var/lib/apt/lists/*

# Configure C++ compiler defaults
ENV CXX=g++
ENV CC=gcc

# Set working directory
WORKDIR /workspace

# Display compiler versions
RUN g++ --version && gdb --version

CMD ["/bin/bash"]
