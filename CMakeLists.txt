cmake_minimum_required(VERSION 3.5)

# Set the project name
project(main)

# Find all .cpp and .hpp files in the current directory
file(GLOB SOURCES "*.cpp" "*.hpp")

# Print all source files (for debugging)
message("All sources: ${SOURCES}")

# Specify the executable and its source files
add_executable(main ${SOURCES})
