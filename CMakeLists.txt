# cmake_minimum_required(VERSION <specify CMake version here>)
project(Pomelo)

set(CMAKE_CXX_STANDARD 11)

add_library(Pomelo
        MotorControllerGroup.cpp MotorControllerGroup.h
        MotorControllers/TalonSRX.cpp MotorControllers/TalonSRX.h
        RUN.cpp)

