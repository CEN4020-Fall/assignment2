//Created by Nicholas Watts on Oct 4, 2019
//Function definitions are based on those in Bicycle.cpp except
//where otherwise annotated.

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model)
{
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

//This function determines the mileage based on the implementation outlined
//in the assignment pdf. The mileage is somewhere between 0.1 and 0.5 miles
//per minute, and an additional amount of minutes if the time is between 
//25 and 250 minutes.
double Skateboard::mileageEstimate(double p_time)
{
	srand(time(NULL));
	int addition = 0;
	double mileage = rand()%5 + 1.0;
	mileage *= 0.1 * p_time;
	if (p_time > 25 && p_time < 250)
	{
		addition = rand()%((int) p_time / 3);
		addition += 1;
		mileage += addition;
	}
	return mileage;
}

string Skateboard::toString()
{
	return "-> Skateboard\n" + Vehicle::toString();
}
