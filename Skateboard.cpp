//
//Created by Taylor Driver on 10/3/19
//

#include "Skateboard.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	srand((unsigned)time(0));

	double mileage = (rand() % .5) + .1;

	if(time>25 && time < 250)
		mileage = mileage + ((rand() % time/3) + 1);  

}

string Skateboard::toString() {
	string s = "-> Skateboard\n\t";
	return "-> Skateboard\n" + Vehicle::toString(); 


}
