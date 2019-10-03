//
// Created by Jessica Whittaker on 10/2/19.
//
#include "Jet.h"

//default construtor
Jet::Jet() {
    numberOfEngines = 1;    //default numberOfEngines to 1;
    setBrand("Boeing");
    setModel("737");
}

//default constructor
Jet::Jet(string brand, string model, string fuelType, int numEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numEngines);
}

//deconstructor
Jet::~Jet() = default;

//get function
int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

//set function
void Jet::setNumberOfEngines(int numEngines) {
    numberOfEngines = numEngines;
}

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

//Jet message
string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
           to_string( getNumberOfEngines() );
}
