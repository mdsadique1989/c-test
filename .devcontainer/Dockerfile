# Start from Microsoft’s official C++ dev container image
FROM mcr.microsoft.com/devcontainers/cpp:latest

# Install extra tools useful for learning and debugging C++
RUN apt-get update && apt-get install -y \
    valgrind \
    clang-format \
    cppcheck \
    gdb \
    git-lfs \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

# Initialize Git LFS so hooks are set up automatically
RUN git lfs install --system
