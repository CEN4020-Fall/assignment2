//
// Created by Keith Van Dyke on 10/04/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "Vehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, string fuelType,
                 int numEngines = 1);

    virtual ~Jet();
    int getEngineCount();
    void setEngineCount(int numEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
