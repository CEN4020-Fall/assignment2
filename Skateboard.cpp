//
// Created by Jessica Whittaker on 10/2/19.
//

#include "Skateboard.h"


Skateboard::Skateboard( string brand, string model ) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    int r = rand() % 5 + 1;
    int d = r/100;
    double mileage = d * time;
    if ( time > 25 && time < 250 )
    {
      int rr = rand() % ( (time / 3) + 1 ) + 1;
      mileage += rr;
    }
    return mileage;
}

string Bicycle::toString() {
    return "-> Skateboard\n" + Vehicle::toString()
}
