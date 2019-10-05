//Created by Nicholas Watts on Oct 4, 2019
//The function prototypes in this interface are based off of those
//provided in Bicycle.h, except where annotated.

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard: public Vehicle
{

private:
	
public:
	explicit Skateboard(string brand, string model);
	virtual ~Skateboard();
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif
