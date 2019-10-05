//
// Created by Andres Paz
//
#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
    explicit Skateboard(string brand, string model);

   
    virtual string toString();
    virtual double mileageEstimate(double time);
    virtual ~Skateboard();
};


#endif
