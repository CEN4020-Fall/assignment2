//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_CAR_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    string myEngineSize;
    int numEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 string engineSize, int numberOfEngines);

    virtual ~Jet();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
    void setNumberofEngines(int ne);
};


#endif //DRIVINGSIMULATOR_CAR_H
