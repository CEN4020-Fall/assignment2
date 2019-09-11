//
// Created by Esteban Parra on 9/5/19.
//

#include "Bicycle.h"


Bicycle::Bicycle(string brand, string model, int gearCount) {
    setBrand(brand);
    setModel(model);
    setGearCount(gearCount);
}

Bicycle::~Bicycle() = default;

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
    string s = "-> Bicycle\n\t";
    return "-> Bicycle\n" + Vehicle::toString() + "\n\tGears: " +
           to_string(myGearCount);
}