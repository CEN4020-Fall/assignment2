//
// Created by Davion Myles on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"

class Scooter : public PoweredVehicle
{

public:
    Scooter();

    explicit Scooter(string brand, string model, string fuelType);

    virtual ~Scooter();
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_SCOOTER_H
