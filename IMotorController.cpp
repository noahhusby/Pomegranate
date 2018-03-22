/*
 * IMotorController.cpp - Pomegranate Robotics Library
 * Copyright (c) 2018 Noah Husby. All right reserved.
 */
#include "IMotorController.h"

/*
 * Adapter Types:
 * 1 - PWM
 * 2 - I2C
 */

IMotorController::IMotorController(int adapterType, int address)
{
    this->adapterType = adapterType;
    this->address = address;
}

void configureController()
{

}
