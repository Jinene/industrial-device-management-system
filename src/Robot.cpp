#include "Robot.hpp"
#include <iostream>

Robot::Robot(std::string id, std::string location,
             double power, int tasks)
    : Device(std::move(id), std::move(location), power),
      taskCount_(tasks),
      motorHealthy_(true)
{}

void Robot::performDiagnostic() {
    status_ = motorHealthy_ ? DeviceStatus::ACTIVE : DeviceStatus::ERROR;
}

void Robot::displayInfo() const {
    std::cout << "[Robot] ID: " << id_
              << ", Location: " << location_
              << ", Tasks: " << taskCount_
              << ", Status: " << statusToString(status_)
              << ", Power: " << powerConsumption_
              << "\n";
}
