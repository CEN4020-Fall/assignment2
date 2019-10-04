//
// Created by Davion Myles on 10/4/2019
//


#include "Jet.h"
#include "stdlib.h"
#include "math.h"

Jet::Jet(string brand, string model, string fuelType, int engines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engines) {
    if(engines <= 0)
    {
        numberOfEngines = 1;
    }else{
        numberOfEngines = engines;
    }
}

double Jet::mileageEstimate(double time) {
    double mileage = (rand() % 100 + 40) * time;
    if(fuelType == "Rocket" && numberOfEngines > 2){
        mileage += mileage * (numberOfEngines * 0.055);
    }
    return floor(mileage);
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
        getNumberOfEngines();
}