//
// Created by Robby on 10/6/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
    Skateboard(string brand, string model);

    virtual ~Skateboard();
    double mileageEstimate(double myTime);
};

#endif //DRIVINGSIMULATOR_SKATEBOARD_H
