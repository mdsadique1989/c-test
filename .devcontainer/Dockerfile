FROM mcr.microsoft.com/devcontainers/cpp:latest

# For Alpine-based images, use apk instead of apt-get
RUN apk update && apk add --no-cache \
    valgrind \
    clang-extra-tools \
    cppcheck \
    gdb \
    git-lfs

RUN git lfs install --system
