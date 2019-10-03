//Jet.cpp

#include "Jet.h"

Jet::Jet() {
    setFuelType("unknown");
}

Jet::~Jet() = default;

string Jet::getFuelType() {
    return fuelType;
}

void Jet::setFuelType(string fuel) {
    fuelType = fuel;
}

string Jet::toString() {
    return Vehicle::toString() + "\n\tFuelType: " + getFuelType();
}

