//
// Created by Noah Husby on 3/22/2018.
//

#include "TalonSRX.h"
#include <Servo.h>

Servo controllers;
double percent;
int pin;

TalonSRX::TalonSRX(int PWM) {
    controllers.attach(pin);
}

void set(double speed) {
    int PWMvalue = speed * 100 *5 + 1500;
    controllers.writeMicroseconds(PWMvalue);
}

void stopMotor() {

}