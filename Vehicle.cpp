//
// Created by Esteban Parra on 9/5/19.
//

#include "Vehicle.h"

Vehicle::Vehicle(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Vehicle::~Vehicle() = default;

string Vehicle::getBrand() {
    return myBrand;
}

void Vehicle::setBrand(string brand) {
    myBrand = brand;
}

string Vehicle::getModel() {
    return myModel;
}

void Vehicle::setModel(string model) {
    myModel = model;
}

string Vehicle::toString() {
    return "\tBrand= " + getBrand() + "\n\tModel= " + getModel();
}