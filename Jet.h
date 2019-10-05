//
// Created by Andres Paz
//
#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
#include "Vehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, int numberOfEngines = 1);

    virtual ~Jet();
    int getEngineCount();
    void setEngineCount(int gearCount);
    virtual ~Jet();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif
