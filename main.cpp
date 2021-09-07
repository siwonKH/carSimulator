#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Car.h"

using namespace std;


void Car::Init() {
    mass = 30000;
    maxTorque = 2500;
    horsePower = 500;
    maxRpm = 2500;
    tyreSize = 57.15;
    tyreRadius = tyreSize / 2;
}

void Car::InstantSetPhysics() {  // 임시
    velocity = 30;
}

void Car::CalcPhysics() {
    throttle = 100;  // 임시
    torque = (double)(5252 * horsePower) / rpm;
//    kineticEnergy = maxTorque * (throttle / 100.0) * gearRatio;
    velocity = sqrt(kineticEnergy * 2 / mass);
    momentum = mass * velocity;
    cout << "Ek = " << kineticEnergy << "J" << endl;
    cout << "velocity: " << velocity << endl << endl;
}

//velocity = rpm * (1 / gearRatio) * (2 * tyreRadius * 3.1415926) / 100 / 60;  // 엔진 회전수 * 기어비율 * 타이어 원주 / 100 / 60 = Xm/s
//kineticEnergy = 0.5 * mass * velocity * velocity;
//momentum = mass * velocity;

void Car::GearUp() {
    gear++;
    gearRatio = gearRatios[gear];
}


int main() {
    Car car;
    car.Init();
    char input = 1;
    char recent_inp = 0;
    car.CalcPhysics();
//    for (;;) {
//        if (_kbhit()) {
//            input = _getch();
//            switch (input) {
//                case 119:
//                    car.Accelerate();
//                    break;
//                case 115:
//                    car.Brake();
//                    break;
//                case 72:
//                    car.GearUp();
//                    break;
//                case 80:
//                    car.GearDown();
//                    break;
//                case 27:
//                    return 0;
//                default:
//                    break;
//            }
//            Sleep(25);
//        }
//        if (recent_inp == input) {
//            Sleep(50);
//        } else {
//            Sleep(25);
//            recent_inp = input;
//        }
//    }
    Sleep(100000);
    return 0;
}
