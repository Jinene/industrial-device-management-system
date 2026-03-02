#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "Device.hpp"

class Robot final : public Device {
private:
    int taskCount_;
    bool motorHealthy_;

public:
    Robot(std::string id, std::string location,
          double power, int tasks);

    void performDiagnostic() override;
    void displayInfo() const override;
};

#endif
