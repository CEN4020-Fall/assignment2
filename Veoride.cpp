//
// Created by Andres Paz
//
#include "Veoride.h"

Veoride::~Veoride() = default;

//default construtor
Veoride::Veoride() {
    setBrand("Cheapy");
    setModel("30mph");
    setFuelType("manpower/electric");
}

//default constructor
Veoride::Veoride(string brand, string model, string fuelType) {
    setBrand(brand);
    setModel(model);
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
