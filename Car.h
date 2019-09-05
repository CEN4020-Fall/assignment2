//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_CAR_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"

class Car : public PoweredVehicle {

private:
    string myEngineSize;
public:
    Car();

    explicit Car(string engineSize);

    string getEngineSize();

    void setEngineSize(string engineSize);

    virtual double mileageEstimate(double time);

    virtual string toString();

};


#endif //DRIVINGSIMULATOR_CAR_H
