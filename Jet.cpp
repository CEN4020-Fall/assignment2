//
//	Created by Taylor Driver on 10/3/2019
//


#include "Jet.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <random>

Jet::Jet() {
	myEngineSize = "unknown";
	myEngineNum = 1;
	setBrand("Custom");
	setModel("V6");
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

int Jet::getEngineNum() {
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
	//srand(time(NULL));
	//double mileage = (rand() % 100-39) + 40; 
	//used Cubbi's answer on StackOverflow's "Random Number c++ in some range"	
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution<int> uni(40,100);
	int randnum = uni(rng);
	double mileage = randnum * time;

	if(fuelType == "Rocket" && myEngineNum == 2)
		mileage = mileage + 5.5;

	return mileage;
}


string Jet::toString() {
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " + getEngineSize();
}
