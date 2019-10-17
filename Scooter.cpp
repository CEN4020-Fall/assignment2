#include "Scooter.h"


Scooter::Scooter(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Scooter::~Scooter() = default;

double Scooter::mileageEstimate(double time) {
	int milage = 3 * time;
	double i = time * 0.05;
	if (time > 30) {
		mileage = mileage - i;
	}
	return mileage;
}

string Scooter::toString() {
	string s = "-> Scooter\n\t";
	return "-> Scooter\n" + Vehicle::toString();
}