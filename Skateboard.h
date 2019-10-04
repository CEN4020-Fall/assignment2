//
// Created by Emilio Faim.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H
#include <stdlib.h>
#include "Vehicle.h"

class Skateboard : public Vehicle {

private:
    int minutes;

public:
    explicit Skateboard(string brand, string model, int min);

    virtual ~Skateboard();
    int getMinutes();
    void setMinutes(int min);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Skateboard_H
