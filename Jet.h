//
// Conner Flynn (cjf16e) 10/2/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
	int numberOfEngines;
	
public:
	Jet();
	
	explicit Jet(string brand, string model, string fuelType, int numberOfEngines = 1);
	
	virtual ~Jet();
	string getFuelType();
	virtual string toString();
	virtual double mileageEstimate(double time);
};


#endif //DRIVINGSIMULATOR_JET_H