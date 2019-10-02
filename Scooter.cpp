//
// Created by Jessica Whittaker on 10/2/19.
//
#include "Scooter.h"

//default construtor
Scooter::Scooter() {
    setBrand("Wolf");
    setModel("50cc");
    setFuelType("gas");
}

//default constructor
Scooter::Scooter(string brand, string model, string fuelType) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
}

//deconstructor
Scooter::~Scooter() = default;

//mileage estimate -- creates a random num, checks if electric or gas scooter
//if a gas scooter, double the
double Jet::mileageEstimate(double time) {
    double mileage = 5 * time;
    if ( fuelType == "gas" )
    {
      mileage += milage * 3;
    }
    return mileage;
}

//Scooter message
string Scooter::toString() {
    return "-> Scooter\n" + PoweredVehicle::toString();
}
