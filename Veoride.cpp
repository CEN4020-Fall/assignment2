#include "Veoride.h"

Veoride::~Veoride() = default;

//default construtor
Veoride::Veoride() {
    setPrice("Cheapy");
    setSpeed("30mph");
    setFuelType("manpower/electric");
}

//default constructor
Veoride::Veoride(string price, string speed, string fuelType) {
    setPrice(price);
    setSpeed(speed);
    setFuelType(fuelType);
}

double Veoride::mileageEstimate(double time) {
    double mileage = 5 * time;
    if ( fuelType == "manpower/electric" )
    {
      mileage += mileage * 3;
    }
    return mileage;
}

string Veoride::toString() {
    return "-> Veoride\n" + PoweredVehicle::toString();
}
