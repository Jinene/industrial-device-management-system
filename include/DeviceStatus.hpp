#ifndef DEVICESTATUS_HPP
#define DEVICESTATUS_HPP

#include <string>

enum class DeviceStatus {
    ACTIVE,
    INACTIVE,
    ERROR
};

inline std::string statusToString(DeviceStatus status) {
    switch (status) {
        case DeviceStatus::ACTIVE: return "ACTIVE";
        case DeviceStatus::INACTIVE: return "INACTIVE";
        case DeviceStatus::ERROR: return "ERROR";
        default: return "UNKNOWN";
    }
}

#endif
