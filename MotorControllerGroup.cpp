//
// Created by Noah Husby on 3/22/2018.
//

#include "MotorControllerGroup.h"

MotorControllerGroup::MotorControllerGroup(TalonSRX motorController0)
{
    controlArg = 0;
}

MotorControllerGroup::MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1)
{
    controlArg = 1;
}

MotorControllerGroup::MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1, TalonSRX motorController2, TalonSRX motorController3)
{
    controlArg = 2;
}

MotorControllerGroup::MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1, TalonSRX motorController2, TalonSRX motorController3, TalonSRX motorController4, TalonSRX motorController5)
{
    controlArg = 3;
}

MotorControllerGroup::MotorControllerGroup(TalonSRX motorController0, TalonSRX motorController1, TalonSRX motorController2, TalonSRX motorController3, TalonSRX motorController4, TalonSRX motorController5, TalonSRX motorController6, TalonSRX motorController7)
{
    controlArg = 4;
}

/**
 * Stops motor movement
 */
void MotorControllerGroup::stopMotor() {

}

/**
 * Common interface for inverting direction of a speed controller
 * @param isInverted
 */
void MotorControllerGroup::setInverted(bool isInverted) {
    this->isReversed = isInverted;
}

/**
 * Common interface for setting the speed of a speed controller
 * @param speed
 */
void MotorControllerGroup::set(double speed) {
    if(isReversed) {
        speed *= -1;
    }
    currentSpeed = speed;
    //DO SPEED CONTROL HERE
}

/**
 * Common interface for returning if a speed controller is in the inverted state or not
 * @return
 */
bool MotorControllerGroup::getInverted() {
    return this->isReversed;
}

/**
 * Common interface for getting the current set speed of a speed controller
 * @return
 */
double MotorControllerGroup::get() {
    return currentSpeed;
}



