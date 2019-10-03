//
//Kristen Davis
//
#include <cstdlib>
#include <ctime>
#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model, int numberofwheels) {
    setBrand(brand);
    setModel(model);
    setGearCount(numberofwheels);
}

Skateboard::~Skateboard() = default;

int Skateboard::getWheelCount() {
    return numberofwheels;
}

void Skateboard::setWheelCount(int num) {
    numberofwheels = num;
}

double Skateboard::mileageEstimate(double time) {
    double mileage = (rand()%(.5-.1 +1)+.1) * time;
    if(time>=25 && time<250)
    {
      double high= time/3;
      mileage+=(rand()%(high-1)+1);
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\nWheels: " +
           to_string(numberofwheels);
}
