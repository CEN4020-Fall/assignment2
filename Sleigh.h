//
// Created by Keith Van Dyke on 10/04/19
//

#ifndef DRIVINGSIMULATOR_SLEIGH_H
#define DRIVINGSIMULATOR_SLEIGH_H

#include "PoweredVehicle.h"

class Sleigh : public PoweredVehicle {

private:
    int numberOfReindeer;

public:
    explicit Sleigh(string brand, string model, string fuelType, int numReindeer = 8);

    virtual ~Sleigh();
    int getReindeerCount();
    void setReindeerCount(int numReindeer);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SLEIGH_H
