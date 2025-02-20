@echo off
REM Remove and recreate the build directory
rmdir /s /q build
mkdir build

REM Change to the build directory
cd build

REM Run CMake with MinGW Makefiles generator
cmake -G "MinGW Makefiles" ..

REM Build the project using mingw32-make
mingw32-make

REM Run the executable
main.exe
