# CMakeLists.txt

cmake_minimum_required(VERSION 3.5)

# Set the project name
project(MyQtApp)

# Find Qt libraries (make sure to use the correct Qt version)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Specify the executable and its source files
add_executable(MyQtApp main.cpp)

# Link the Qt libraries
target_link_libraries(MyQtApp Qt6::Core Qt6::Gui Qt6::Widgets)
