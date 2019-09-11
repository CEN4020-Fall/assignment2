//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_BICYCLE_H
#define DRIVINGSIMULATOR_BICYCLE_H

#include "Vehicle.h"

class Bicycle : public Vehicle {

private:
    int myGearCount;

public:
    explicit Bicycle(string brand, string model, int gearCount = 1);

    virtual ~Bicycle();
    int getGearCount();
    void setGearCount(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
