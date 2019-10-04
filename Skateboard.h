//
// Conner Flynn (cjf16e) 10/2/19
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
    explicit Bicycle(string brand, string model);

    virtual ~Bicycle();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H