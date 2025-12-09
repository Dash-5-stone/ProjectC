
# 1. Specify the minimum CMake version 
cmake_minimum_required(VERSION 3.15) 
# 2. Define the project name 
project(app) 
# 3. Set the C++ standard 
set(CMAKE_CXX_STANDARD 20) 
set(CMAKE_CXX_STANDARD_REQUIRED True) 
# 4. Define the executable target (name + source files) 
add_executable(app main.cpp Date.cpp Lecteur.cpp Livre.cpp Emprunt.cpp)