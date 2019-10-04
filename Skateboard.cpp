//
// Created by Emilio Faim.
//

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model, int min) {
    setBrand(brand);
    setModel(model);
    setMinutes(min);
}

Skateboard::~Skateboard() = default;

int Skateboard::getMinutes(){
  return minutes;
}

void Skateboard::setMinutes(int min){
  minutes = min;
}

double Skateboard::mileageEstimate(double time) {
    double range = (0.5 - 0.1) + 1;
    double mileage = range * ((double)rand() / (RAND_MAX + 1.0));
    if (minutes > 25 && minutes <= 250){
      int range2 = (minutes/3 - 1) + 1;
      mileage = range2 * (rand() / (RAND_MAX + 1.0));
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n\tMinutes: " +
           to_string(minutes);
}
