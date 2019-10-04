//
//Created by Taylor Driver on 10/3/19
//

#include "Skateboard.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
#include <random>

Skateboard::Skateboard(string brand, string model) {
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
	//double mileage = .5 + (std::rand() % (.5-.1+1)) //(double) rand()/(.5 + 1) + .1 + ((double)rand()%.4);
	//mileage = (int) floor(mileage);
	//double mileage = rand() * 1.0 / .5 * (.5-.1+1) + .1;
	//used Cubbi's answer on StackOverflow's "random number c++ in some range"

	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_real_distribution<double> dist(0.1,0.5);
	double randnum = dist(rng);

	double mileage = randnum * time;

	if(time>25.0 && time < 250.0){
		//mileage = mileage + (double)rand()/(time/3) + 1;  
		std::uniform_real_distribution<double> dist(0.1,time/3);
		mileage = mileage + dist(rng);
	}
}

string Skateboard::toString() {
	string s = "-> Skateboard\n\t";
	return "-> Skateboard\n" + Vehicle::toString(); 


}
