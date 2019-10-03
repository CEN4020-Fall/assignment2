#include "Jet.h"
#include <cstdlib>
#include <ctime>
#include <string>

Jet::Jet() {
	myEngineSize = "unknown";
	setBrand("unknown");
	setModel("unkown");
	setNumberOfEngines(1);
}

Jet::Jet(string brand, string model, string fuelType, string engineSize, int numberOfEngines) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setEngineSize(engineSize);
	setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
	return myEngineSize;
}

void Jet::setEngineSize(string engineSize) {
	if (engineSize == "unknown" || engineSize == "small" ||
		engineSize == "medium" || engineSize == "grande") {
		myEngineSize = engineSize;
	}
	else {
		myEngineSize = "unknown";
	}

}

double Jet::mileageEstimate(double time) {
	srand((unsigned)time(0));
	int mileage;
	mileage = (rand() % 60) + 41;
	if (fuelType == "Rocket" && numberOfEngines >= 2) {
		double i = (numberOfEngines * 0.055) + 1;
		mileage = mileage * i;
	}
	return mileage;
}

string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
		getEngineSize();
}

void Jet::setNumberOfEngines(int engineCount){
	numberOfEngines = engineCount;
}