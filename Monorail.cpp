//Created by Nicholas Watts on Oct 4, 2019

#include "Monorail.h"

Monorail::Monorail()
{
	numberCylinders = 0;
	setBrand("Unknown");
	setModel("Unknown");
}

Monorail::Monorail(string brand, string model, int numCyl)
{
	setBrand(brand);
	setModel(model);
	setNumberCyl(numCyl);
}

Monorail::~Monorail() = default;

int Monorail::getNumberCyl()
{
	return numberCylinders;
}

void Monorail::setNumberCyl(int newNum)
{
	if (newNum > 0)
		numberCylinders = newNum;
}

double Monorail::mileageEstimate(double p_time)
{
	srand(time(NULL));
	double mileage = rand()%20 + 35;
	if(getModel() == "aboveGround")
		mileage += mileage * 0.002 * numberCylinders;
	return mileage;
}

string Monorail::toString()
{
	return "-> Monorail\n" + PoweredVehicle::toString() + "\n\tNumber of Cylinders: " +
		to_string(getNumberCyl());
}
