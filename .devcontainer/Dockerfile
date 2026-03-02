FROM mcr.microsoft.com/devcontainers/cpp:latest

RUN apt-get update && apt-get install -y \
    valgrind \
    clang-format \
    cppcheck \
    gdb \
    && apt-get clean && rm -rf /var/lib/apt/lists/*
