//
// Created by Esteban Parra on 9/5/19.
//

#include "Bicycle.h"


Bicycle::Bicycle(int gearCount) {
    setGearCount(gearCount);
}

int Bicycle::getGearCount() {
    return myGearCount;
}

void Bicycle::setGearCount(int gearCount) {
    myGearCount = gearCount;
}

double Bicycle::mileageEstimate(double time) {
    double mileage = 3 * time;
    mileage += mileage * (myGearCount * 0.1);
    return mileage;
}

string Bicycle::toString() {
    return getBrand() + " " + getModel();
}