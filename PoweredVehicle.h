//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_POWEREDVEHICLE_H
#define DRIVINGSIMULATOR_POWEREDVEHICLE_H

#include "Vehicle.h"

class PoweredVehicle : public Vehicle {
protected :
    string fuelType;

public:
    PoweredVehicle();

    virtual ~PoweredVehicle();
    virtual string toString();
    virtual double mileageEstimate(double time) = 0;

    string getFuelType();

    void setFuelType(string fuel);
};


#endif //DRIVINGSIMULATOR_POWEREDVEHICLE_H
