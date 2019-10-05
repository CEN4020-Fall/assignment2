//
// Created by Keith Van Dyke on 10/04/19
//

#include <cstdlib>
#include "Jet.h"

Jet::Jet(string brand, string model, int numEngines, string fuelType) {
    setBrand(brand);
    setModel(model);
    setEngineCount(numEngines);
    setFuelType(fuelType);
}

Jet::~Jet() = default;

int Jet::getEngineCount() {
    return numberOfEngines;
}

void Jet::setEngineCount(int numEngines) {
    numberOfEngines = numEngines;
}

double Jet::mileageEstimate(double time) {
    int rand();
    double mileage = ((rand() % 60) + 40) * time;
    if (fuelType == "Rocket" && numEngines > 2) {
        mileage += (mileage * 0.055) * numEngines;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngines: " +
           to_string(numberOfEngines);
}
