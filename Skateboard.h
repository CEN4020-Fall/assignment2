//
// Created by Jessica Whittaker on 10/2/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

#include <ctime>
#include <cstdlib>

class Skateboard : public Vehicle {

public:
    explicit Skateboard (string brand, string model );

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
