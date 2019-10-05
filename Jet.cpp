//Created by Nicholas Watts on Oct 4, 2019
//The functions in this file are modeled on those in Car.cpp and Bicycle.cpp,
//except for where changes were made, as annotated.

#include "Jet.h"

Jet::Jet()
{
	numberOfEngines = 0;
	setBrand("Unknown");
	setModel("Unknown");
}

Jet::Jet(string brand, string model, string fuelType, int numEngines)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberEngines(numEngines);
}

Jet::~Jet() = default;

int Jet::getNumberEngines()
{
	return numberOfEngines;
}

//NW If the number of engines provided is less than zero, it stays the same.
//Otherwise, the number of engines is updated.
void Jet::setNumberEngines(int newNum)
{
	if (newNum >= 0)
		numberOfEngines = newNum;
}

//NW This function has been changed to match the specifications as given in the 
//.pdf provided for the assignment.
double Jet::mileageEstimate(double time)
{
	srand(time(NULL));
	double mileage = rand() % 60 + 40.0;
	if (numberOfEngines > 2 && fuelType == "Rocket")
		mileage += mileage * 0.055 * numberOfEngines;
	return mileage;

}

string Jet::toString()
{
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + 
		to_string(getNumberEngines());
}
