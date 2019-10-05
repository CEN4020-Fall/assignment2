//Created by Nicholas Watts on March 4, 2019

#ifndef DRIVINGSIMULATOR_MONORAIL_H
#define DRIVINGSIMULATOR_MONORAIL_H

#include "PoweredVehicle.h"

class Monorail: public PoweredVehicle
{

	private:
		int numberCylinders;

	public:
		Monorail();
		explicit Monorail(string brand, string model, string fuelType,
			int numCyl = 6);
		int getNumberCyl();
		void setNumberCyl(int newNum);
		virtual double mileageEstimate(double time);
		virtual string toString();
};

#endif
