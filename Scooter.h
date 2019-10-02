//
// Created by Jessica Whittaker on 10/2/19.
//

#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"

#include <ctime>
#include <cstdlib>

class Scooter : public PoweredVehicle {

public:
    Scooter();

    explicit Scooter(string brand, string model, string fuelType);

    virtual ~Scooter();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
