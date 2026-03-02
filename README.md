# 🏭 Industrial Device Management System (IDMS)

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![Build](https://img.shields.io/badge/build-CMake-green)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

A modular, extensible, and production-style C++17 application that simulates an industrial environment where multiple smart devices are monitored and controlled by a central controller.

This project demonstrates advanced Object-Oriented Programming principles and modern C++ architecture.

---

## 📌 Overview

The Industrial Device Management System (IDMS) models an industrial automation system with:

- Abstract base class for devices
- Runtime polymorphism
- Fault propagation logic
- Smart pointer-based memory management
- Exception safety
- Clean modular architecture

---

## 🧠 Core C++ Concepts Demonstrated

- Abstraction
- Inheritance
- Polymorphism (virtual functions)
- Encapsulation
- Composition
- RAII
- Smart pointers (`std::shared_ptr`)
- Move semantics
- Deleted copy constructors (prevent slicing)
- Const-correctness
- Exception safety

---

## 🏗 Project Structure


industrial-device-management-system/
│
├── CMakeLists.txt
├── README.md
├── LICENSE
│
├── include/
│ ├── DeviceStatus.hpp
│ ├── Device.hpp
│ ├── Sensor.hpp
│ ├── Robot.hpp
│ ├── Controller.hpp
│
├── src/
│ ├── Device.cpp
│ ├── Sensor.cpp
│ ├── Robot.cpp
│ ├── Controller.cpp
│ └── main.cpp
│
└── docs/
└── architecture.md


---

## ⚙️ Build Instructions

### Requirements

- C++17 compatible compiler
- CMake ≥ 3.10

### Build

```bash
mkdir build
cd build
cmake ..
make
./IndustrialDeviceSystem
