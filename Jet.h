//This file was written by Nicholas Watts on Oct 4, 2019.
//Code modeled on Bicycle.h and Car.h in parts, with differences
//in implementation annotated.

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet: public PoweredVehicle {

private:
	int numberOfEngines;

public:
	Jet();
	explicit Jet(string brand, string model, string fuelType,
			int engineNum = 1);		//number of engines to be copied to 
							//private data
	virtual ~Jet();
	int getNumberEngines();			//NW added
	void setNumberEngines(int newNum);	//NW added
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif
