//
// Created by Jessica Whittaker on 10/2/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

#include <ctime>
#include <cstdlib>

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;
public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numEngines);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int numEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_JET_H
