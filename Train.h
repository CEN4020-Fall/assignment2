//
// Conner Flynn (cjf16e) 10/4/19
//

#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle {

private:
    string myEngineSize;

public:
    Train();

    explicit Train(string brand, string model, string fuelType,
                 string engineSize);

    virtual ~Train();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_TRAIN_H