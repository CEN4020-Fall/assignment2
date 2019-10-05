//Created by Nicholas Watts on Oct 4, 2019

#include "Monorail.h"

Monorail::Monorail()
{
	numberCylinders = 0;
	setBrand("Unknown");
	setModel("Unknown");
}

Monorail::Monorail(string brand, string model, string fuelType, int numCyl)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberCyl(numCyl);
}

int Monorail::getNumberCyl()
{
	return numberCylinder;
}

void Monorail::setNumberCyl(int newNum)
{
	if (newNum > 0)
		numberCylinder = newNum;
}

double Monorail::mileageEstimate(double time)
{
	srand(time(NULL));
	double mileage = rand()%20 + 35;
	if(model == "aboveGround")
		mileage += mileage * 0.002 * numberCylinder;
	return mileage;
}

string Monorail::toString()
{
	return "-> Monorail\n" + PoweredVehicle::toString() + "\n\tNumber of Cylinders: " +
		to_string(getNumberCyl());
}
