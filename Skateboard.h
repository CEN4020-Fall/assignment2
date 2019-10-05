//
// Created by Keith Van Dyke on 10/04/19
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    float RandomFloat(float a, float b);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
