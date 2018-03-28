//
// Created by Noah Husby on 3/22/2018.
//

#ifndef POMELO_TALONSRX_H
#define POMELO_TALONSRX_H


class TalonSRX {
public:
    TalonSRX(int PWM);
    void stopMotor();
    void set(double);
};


#endif //POMELO_TALONSRX_H
