//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_HELICOPTER_H
#define DRIVINGSIMULATOR_HELICOPTER_H

#include "PoweredVehicle.h"

class Helicopter : public PoweredVehicle {

private:
    string liftType;
public:
    Helicopter();
    explicit Helicopter(string brand, string model, string liftType);
    virtual ~Helicopter();
    void setLiftType(string liftType);
    string getLiftType();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_HELICOPTER_H
