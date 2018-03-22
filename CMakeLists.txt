# cmake_minimum_required(VERSION <specify CMake version here>)
project(Pomelo)

set(CMAKE_CXX_STANDARD 11)

add_library(Pomelo IMotorController.cpp IMotorController.h)

