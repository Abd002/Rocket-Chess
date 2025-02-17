#!/bin/bash

# Create the build directory if it doesn't exist
rm -rf build
mkdir -p build

# Change to the build directory
cd build

# Run cmake with the specified generator
cmake -G "MinGW Makefiles" ..

# Optionally, you can also run make to build the project
make

# Run the executable
./main