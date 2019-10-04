//
// Created by Esteban Parra on 9/5/19.
//

#include "Helicopter.h"
#include <ctime>
#include <cstdlib> 

Helicopter::Helicopter() {
    setBrand("Custom");
    setModel("VTx");
    setLiftType("Medium");
}

Helicopter::Helicopter(string brand, string model, string liftType) {
    setBrand(brand);
    setModel(model);
    setLiftType(liftType);
}

Helicopter::~Helicopter() = default;

void Helicopter::setLiftType(string liftType){
	this->liftType = liftType;
}

string Helicopter::getLiftType(){
	return (this->liftType);
}

double Helicopter::mileageEstimate(double time) {    
	std::srand(std::time(NULL)); 
    int rand = std::rand() %(70 - 10 + 1) + 10; 
    double mileage = rand * time;
    if (liftType == "Light") {
        mileage += mileage * .07;
    }
    return mileage;
}

string Helicopter::toString() {
    return "-> Helicopter\n" + PoweredVehicle::toString() + "\n\tLift type: " +
           getLiftType();
}
