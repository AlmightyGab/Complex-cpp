cmake_minimum_required(VERSION 3.16)

# Project name
project(Complex)

# Use modern C++
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

# Create the executable from your .cpp files
add_executable(complex main.cpp complex.cpp)

