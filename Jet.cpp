//
// Created by Esteban Parra on 9/5/19.
//

#include "Jet.h"
#include <ctime>
#include <cstdlib> 

Jet::Jet() {
    setBrand("Custom");
    setModel("VTx");
    setFuelType("Standard");
    this->numberOfEngines = 1;
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

void Jet::setNumberOfEngines(int numberOfEngines){
	this->numberOfEngines = numberOfEngines;
}

int Jet::getNumberOfEngines(){
	return (this->numberOfEngines);
}

double Jet::mileageEstimate(double time) {    
	std::srand(std::time(NULL)); 
    int rand = std::rand() %(100 - 40 + 1) + 40; 
    double mileage = rand * time;
    if (fuelType == "Rocket" && this->numberOfEngines > 1) {
        mileage += mileage * (0.055 * this->numberOfEngines);
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
           to_string(getNumberOfEngines());
}
