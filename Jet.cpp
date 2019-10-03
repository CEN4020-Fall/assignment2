//
//	Created by Taylor Driver on 10/3/2019
//


#include "Jet.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Jet::Jet() {

}

Jet::Jet(string brand, string model, string fuelType, string engineSize, int engineNum) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineSize(engineSize);
	setEngineNum(engineNum);
}


Jet::~Jet() = default;

string Jet::getEngineSize() {
	return myEngineSize;
}

string Jet::getEngineNum() {
	return myEngineNum;
}

void Jet::setEngineSize(string engineSize) {
	if(engineSize == "unknown" || engineSize == "small" || engineSize == "medium" || engineSize == "grande") {
		myEngineSize = engineSize;
	}
	else
	{
		myEngineSize = "unknown";
	}
}

void Jet::setEngineNum(int engineNum) {
	myEngineNum = engineNum;
}

double Jet::mileageEstimate(double time) {
	srand((unsigned)time(0));

	double mileage = (rand() % 100) + 40; 

	if(fuelType == "Rocket" && myEngineNum == 2)
		mileage = mileage + 5.5;

	return mileage;
}


string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " + getEngineSize();
}
