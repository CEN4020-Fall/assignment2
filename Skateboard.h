//
// Created by Kristen Davis
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:
    int numberofwheels;

public:
    explicit Skateboard(string brand, string model, int numberofwheels = 4);

    virtual ~Skateboard();
    int getWheelCount();
    void setWheelCount(int numberofwheels);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
