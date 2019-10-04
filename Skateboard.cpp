//
// Conner Flynn (cjf16e) 10/4/19
//

#include "Skateboard.h"
#include <random>
#include <math.h>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    random_device rd;	//g++ -std=c++11
	mt19937 gen(rd());
	uniform_real_distribution<double> dis(0.1, 0.5);
	//https://stackoverflow.com/questions/19652657/c-create-a-random-decimal-between-0-1-and-10
	double mileage = dis(gen) * time;
	
    if (time > 25 && time < 250) {
		uniform_real_distribution<double> dis(1, (time/3));
        mileage += mileage * dis(gen);
    }
    return floor(mileage);
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n";
}
