//Jet.cpp

#include "Jet.h"

Jet::Jet() {
    setFuelType("unknown");
	setBrand("custom"); //XOJET
    setModel("custom");	//Bombardier
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
	setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Jet::~Jet() = default;

string Jet::setFuelType() {
    return fuelType;
}

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Car::setNumberOfEngines(int numberOfEngines) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}


void Jet::setFuelType(string fuel) {
    fuelType = fuel;
}

string Jet::toString() {
    return Vehicle::toString() + "\n\tFuelType: " + getFuelType();
}

