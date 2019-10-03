#include "Jet.h"
#include <cstdlib>
#include <ctime>
#include <string>

Jet::Jet() {
	setBrand("unknown");
	setModel("unkown");
	setNumberOfEngines(1);
}

Jet::Jet(string brand, string model, string fuelType, string engineSize, int numberOfEngines) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

double Jet::mileageEstimate(double time) {
	srand((unsigned)time(0));
	int mileage;
	mileage = (rand() % 60) + 41;
	if (fuelType == "Rocket" && numberOfEngines >= 2) {
		double i = (numberOfEngines * 0.055) + 1;
		mileage = mileage * i * time;
	}
	return mileage;
}

string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString();
}

void Jet::setNumberOfEngines(int engineCount){
	numberOfEngines = engineCount;
}