//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:
    

public:
    Skateboard();	
    explicit Skateboard(string brand, string model);
    virtual ~Skateboard();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
