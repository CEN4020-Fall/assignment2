//
// Created by Emilio Faim
//
#ifndef DRIVINGSIMULATOR_HELICOPTER_H
#define DRIVINGSIMULATOR_HELICOPTER_H
#include <stdlib.h>
#include "PoweredVehicle.h"

class Helicopter : public PoweredVehicle {

private:
    int myEngineSize;


public:
    Helicopter();

    explicit Helicopter(string brand, string model,
                 int engineSize = 1);

    virtual ~Helicopter();
    int getEngineSize();
    void setEngineSize(int size);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Helicopter_H
