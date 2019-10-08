//
// Created by Robby on 10/4/19.
//

#include "Jet.h"
#include <ctime>
#include <random>

Jet::Jet(){
    setFuelType("Rocket");
    setNumEngines(3);
}

Jet::Jet(string fuelType, int numEngines){
    setFuelType(fuelType);
    setNumEngines(numEngines);
}

Jet::~Jet() = default;

int Jet::getNumEngines() {
    return numberOfEngines;
}

void Jet::setNumEngines(int numEngines) {
    numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time) {
    double mileage = rand()%60 + 40;
    if(numberOfEngines > 2 && fuelType == "Rocket"){
        mileage += 0.055*numberOfEngines;
    }
    return mileage;
}