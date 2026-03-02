#include "Sensor.hpp"
#include <iostream>

Sensor::Sensor(std::string id, std::string location,
               double power, std::string measurementType)
    : Device(std::move(id), std::move(location), power),
      measurementType_(std::move(measurementType)),
      calibrated_(true)
{}

void Sensor::performDiagnostic() {
    status_ = calibrated_ ? DeviceStatus::ACTIVE : DeviceStatus::ERROR;
}

void Sensor::displayInfo() const {
    std::cout << "[Sensor] ID: " << id_
              << ", Location: " << location_
              << ", Type: " << measurementType_
              << ", Status: " << statusToString(status_)
              << ", Power: " << powerConsumption_
              << "\n";
}
