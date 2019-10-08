//
// Created by Robby on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"
class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet(string fuelType, int numEngines = 1);

    virtual ~Jet();

    int getNumEngines();
    void setNumEngines(int numEngines);
    double mileageEstimate(double time);
};

#endif //DRIVINGSIMULATOR_JET_H
