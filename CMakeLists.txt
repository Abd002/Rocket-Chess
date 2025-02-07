# CMakeLists.txt

cmake_minimum_required(VERSION 3.5)

# Set the project name
project(MyQtApp)

# Find Qt libraries (make sure to use the correct Qt version)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Specify the source files in the controller, model, and view folders
file(GLOB_RECURSE CONTROLLER_SOURCES "controller/*.cpp")
file(GLOB_RECURSE MODEL_SOURCES "model/*.cpp")
file(GLOB_RECURSE VIEW_SOURCES "view/*.cpp")

# Add the source files to the executable
set(SOURCES ${CONTROLLER_SOURCES} ${MODEL_SOURCES} ${VIEW_SOURCES} main.cpp)

# Include directories for headers
include_directories(controller model view)

message("All sources: ${SOURCES}")

# Specify the executable and its source files
add_executable(MyQtApp ${SOURCES})


# Link the Qt libraries
target_link_libraries(MyQtApp Qt6::Core Qt6::Gui Qt6::Widgets)
