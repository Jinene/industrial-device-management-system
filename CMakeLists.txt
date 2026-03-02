cmake_minimum_required(VERSION 3.10)

project(IndustrialDeviceSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(IndustrialDeviceSystem
    src/main.cpp
    src/Device.cpp
    src/Sensor.cpp
    src/Robot.cpp
    src/Controller.cpp
)
