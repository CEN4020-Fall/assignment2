#ifndef DRIVINGSIMULATOR_VEORIDE_H
#define DRIVINGSIMULATOR_VEORIDE_H

#include "PoweredVehicle.h"

#include <ctime>
#include <cstdlib>

class Scooter : public PoweredVehicle {

public:
    Veoride();

    explicit Veoride(string brand, string model, string fuelType);

    virtual ~Veoride();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif
