//
// Created by Kristen Davis
//

#ifndef DRIVINGSIMULATOR_BICYCLE_H
#define DRIVINGSIMULATOR_BICYCLE_H

#include "Vehicle.h"

class Bicycle : public Vehicle {

private:
    int numberofwheels;

public:
    explicit Bicycle(string brand, string model, int gearCount = 1);

    virtual ~Bicycle();
    int getGearCount();
    void setGearlCount(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
