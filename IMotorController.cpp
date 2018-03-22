#include "IMotorController.h"

#include <iostream>

IMotorController::IMotorController(int connectorType, int address){
    this->connectorrType = connectorType;
    this->address = address;
}