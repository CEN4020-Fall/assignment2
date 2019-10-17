#include "Skateboard.h"
#include <cstdlib>
#include <ctime>
#include <string>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	srand((unsigned)time(0));
	double i = (rand() % 0.4) + 0.1;
	int mileage = i * time;
	if (time > 25 && time < 250) {
		int j = (time / 3) - 1;
		int h = (rand() % j) + 1;
		mileage = mileage + h;
	}
	return mileage;
}

string Bicycle::toString() {
	string s = "-> Bicycle\n\t";
	return "-> Bicycle\n" + Vehicle::toString();
}