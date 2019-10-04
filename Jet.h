//
//Created by Davion Myles on 10/4/2019
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {
    
private:
    int numberOfEngines;

public:
    explicit Jet(string brand, string model, string fuelType, string engines);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int engines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H