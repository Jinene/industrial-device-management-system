#include "Controller.hpp"
#include <iostream>

Controller::Controller(std::string id, std::string location, double power)
    : Device(std::move(id), std::move(location), power)
{}

void Controller::connectDevice(std::shared_ptr<Device> device) {
    connectedDevices_.push_back(std::move(device));
}

void Controller::performDiagnostic() {
    bool allHealthy = true;

    for (auto& device : connectedDevices_) {
        device->performDiagnostic();
        if (device->getStatus() == DeviceStatus::ERROR) {
            allHealthy = false;
        }
    }

    status_ = allHealthy ? DeviceStatus::ACTIVE : DeviceStatus::ERROR;
}

void Controller::displayInfo() const {
    std::cout << "[Controller] ID: " << id_
              << ", Location: " << location_
              << ", Connected Devices: " << connectedDevices_.size()
              << ", Status: " << statusToString(status_)
              << ", Power: " << powerConsumption_
              << "\n";

    for (const auto& device : connectedDevices_) {
        device->displayInfo();
    }
}
