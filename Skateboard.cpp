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

float Skateboard::RandomFloat(float a, float b) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = b - a;
    float r = random * diff;
    return a + r;
}

double Skateboard::mileageEstimate(double time) {
    double mileage = floor(RandomFloat(0.1, 0.5));
    if(time > 25 && time < 250) {
        mileage += floor((RandomFloat(1, time / 3)));
    }
    return mileage;
}

string Skateboard::toString() {
    return "-> Skateboard\n" + Vehicle::toString();
}
