//
// Created by Davion Myles on 10/4/2019
//

#include "Skateboard.h"
#include "stdlib.h"
#include "math.h"

Skateboard::Skateboard(string brand, string model){
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
    double mileage = (rand() % 0.5 + 0.1) * time;
    if(time > 25 && time <= 250)
    {
        mileage += mileage * ( rand() % (time/3) + 1);
    }
}

string Skatboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skatboard\n" + Vehicle::toString();
}