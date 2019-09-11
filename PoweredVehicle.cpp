//
// Created by Esteban Parra on 9/5/19.
//
#include "PoweredVehicle.h"


PoweredVehicle::PoweredVehicle() {
    setFuelType("unknown");
}

PoweredVehicle::~PoweredVehicle() = default;

string PoweredVehicle::getFuelType() {
    return fuelType;
}

void PoweredVehicle::setFuelType(string fuel) {
    fuelType = fuel;
}

string PoweredVehicle::toString() {
    return Vehicle::toString() + "\n\tFuelType: " + getFuelType();
}