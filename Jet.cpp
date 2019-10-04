//
// Conner Flynn (cjf16e) 10/2/19
//

#include "Jet.h"
#include <iostream>
#include <random>
#include <math.h>
// #include <time.h>
// #include <cstdlib>

Jet::Jet() {
    setFuelType("unknown");
	setBrand("custom"); //XOJET
    setModel("custom");	//Bombardier
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
	setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

string Jet::setFuelType() {
    return fuelType;
}

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engines) {
	numberOfEngines = engines;
}

double Jet::mileageEstimate(double time) {
	// srand(time(0));
	// int max = 100;
	// int min = 40;	
	
	// double mileage = (min + (rand() % (max - min + 1 ))) * time;
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(40, 100);
	double mileage = dis(gen) * time;
	
    if (numberOfEngines > 2 && fuelType == "Rocket") {
        mileage += mileage * 0.055;
    }
    return floor(mileage);
}

void Jet::setFuelType(string fuel) {
    fuelType = fuel;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\Number of Engines: " +
           getNumberOfEngines();
}

