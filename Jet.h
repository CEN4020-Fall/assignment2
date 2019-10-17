#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
	int numberOfEngines = 1;

public:
	Jet();

	explicit Jet(string brand, string model, string fuelType,
		int numberOfEngines);

	virtual ~Jet();
	virtual double mileageEstimate(double time);
	virtual string toString();
	int setNumberOfEngines(int engineCount)
};


#endif //DRIVINGSIMULATOR_JET_H
