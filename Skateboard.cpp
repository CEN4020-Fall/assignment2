//
// Created by Keith Van Dyke on 10/04/19
//

#include <cmath>
#include <cstdlib>
#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    double mileage = floor((rand() % .5) + .1);
    if(time > 25 && time < 250) {
        mileage += (rand() % (time / 3)) + 1;
    }
    return mileage;
}

string Skateboard::toString() {
    return "-> Skateboard\n" + Vehicle::toString();
}
