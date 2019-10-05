//
// Created by Andres Paz
//
#include "Jet.h"

//default constructor
Jet::Jet(string brand, string model, string fuelType, int numEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numEngines);
}

//deconstructor
Jet::~Jet() = default;

//set function
void Jet::setNumberOfEngines(int numEngines) {
    numberOfEngines = numEngines;
}

//get function
int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

//needed help implementing this
//mileage estimate -- creates a random num (40-100) and updates milage based on credentials
double Jet::mileageEstimate(double time) {
    int r = rand() % 60+40;
    double mileage = r * time;
    if ( getNumberOfEngines() > 2 && fuelType == "Rocket" )
    {
      mileage += mileage * ( 5.5 * getNumberOfEngines() );
    }
    return mileage;
}
//needed help implementing this
//Jet message
string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
           to_string( getNumberOfEngines() );
}
