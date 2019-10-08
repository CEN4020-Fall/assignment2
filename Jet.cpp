//
// Created by Robby on 10/4/19.
//

#include "Jet.h"
#include <ctime>
#include <random>

Jet::Jet(string fuelType, int numEngines){
    setFuelType(fuelType);
    setNumEngines(numEngines);
}

int Jet::getNumEngines() {
    return numberOfEngines;
}

void Jet::setNumEngines(int numEngines) {
    numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time) {
    /*srand((unsigned int) time(NULL));
    mileage = rand();
    double mileage = time;
    double max = 0.5, min = 0.1, range;
    range = max - min + 0.1;
    double fin = rand()*1.0;
    mileage = fmod(fin, range+min);
    cout << mileage;
    if(numberOfEngines > 2 && fuelType == "Rocket"){
        mileage += mileage*0.055;
    }*/
    return time;
}