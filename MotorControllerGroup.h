//
// Created by Noah Husby on 3/22/2018.
//

#ifndef POMELO_MOTORCONTROLLERGROUP_H
#define POMELO_MOTORCONTROLLERGROUP_H


#include "MotorControllers/TalonSRX.h"

class MotorControllerGroup {

public:
    MotorControllerGroup(TalonSRX motorController0);

    MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1);

    MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1, TalonSRX motorController2,
                             TalonSRX motorController3);

    MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1, TalonSRX motorController2,
                             TalonSRX motorController3, TalonSRX motorController4, TalonSRX motorController5);

    MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1, TalonSRX motorController2,
                             TalonSRX motorController3, TalonSRX motorController4, TalonSRX motorController5,
                             TalonSRX motorController6, TalonSRX motorController7);

    double get();
    bool getInverted();
    void set(double speed);
    void setInverted(bool isInverted);
    void stopMotor();

private:
    int controlArg; //Controller arrangement for constructor
    bool isReversed; //Checks if MotorControllerGroup is reversed
    double currentSpeed;
};


#endif //POMELO_MOTORCONTROLLERGROUP_H
