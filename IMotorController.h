/*
 * IMotorController.h - Pomegranate Robotics Library
 * Copyright (c) 2018 Noah Husby. All right reserved.
 */
#ifndef POMELO_IMotorController_H
#define POMELO_IMotorController_H


class IMotorController
{
public:
    IMotorController(int, int);
    void husky();

private:
    int adapterType;
    int address;

};