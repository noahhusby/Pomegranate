#ifndef POMELO_IMotorController_H
#define POMELO_IMotorController_H


class IMotorController
{
public:
    IMotorController(int, int);

private:
    int connectorrType;
    int address;

};