#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <string>
#include "DeviceStatus.hpp"

class Device {
protected:
    std::string id_;
    std::string location_;
    double powerConsumption_;
    DeviceStatus status_;

public:
    Device(std::string id, std::string location, double power);
    virtual ~Device();

    // Delete copy to avoid slicing
    Device(const Device&) = delete;
    Device& operator=(const Device&) = delete;

    // Move allowed
    Device(Device&&) noexcept = default;
    Device& operator=(Device&&) noexcept = default;

    virtual void performDiagnostic() = 0;
    virtual void displayInfo() const = 0;

    double getPowerConsumption() const noexcept;
    DeviceStatus getStatus() const noexcept;
    const std::string& getId() const noexcept;
    void setStatus(DeviceStatus status) noexcept;
};

#endif
