//
// Created by kanghyun on 2021-09-06.
//

#ifndef CARSIMULATOR2_0_CAR_H
#define CARSIMULATOR2_0_CAR_H

class Car {
private:
    // Car Specifies
    int mass = 0;
    int maxTorque = 0;  // 2500J  |  5252 x horsePower/rpm
    int horsePower = 0;
    int maxRpm = 0;
    double tyreSize = 0;  // centimeter
    double tyreRadius = 0;

    // Physics
    double kineticEnergy = 0;  // 0.5 * mass * velocity * velocity
    double torque = 0;  // 5252 * horsePower / rpm
    double momentum = 0;  // mass * velocity
    //double force = 0;  // mass * a;
    //double work = 0;  // force * s | maxTorque * throttle / 100
    double accel = 0;
    double velocity = 0;

    // User Controls
    int throttle = 0;  // Gas pedal throttle
    double speed = 0;  // Kilometer per Hour
    int rpm = 0;  // Rotate per minute
    int brakePercentage = 0;
    double gearRatios[25] = {10000, 14.89, 12.41, 10.40, 8.66, 7.32, 6.09, 5.05, 4.21, 3.54, 2.95, 2.47, 2.06, 1.74, 1.45, 1.2, 1, 0.84, 0.7};
    int gear = 0;
    double gearRatio = 0;

public:
    void Init();
//    void Accelerate();
//    void Brake();
    void GearUp();
//    void GearDown();

    void InstantSetPhysics();  // for dev only

    void CalcPhysics();


};

#endif //CARSIMULATOR2_0_CAR_H
