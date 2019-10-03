//
// Created by Taylor Driver on 9/5/19
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_CAR_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
	int numberOfEngines = 1;

public:
	Jet();

	explicit Jet(string brand, string model, string fuelType, string engineSize);

	virtual ~Jet();
	string getEngineSize();
	void setEngineSize(string engineSize);
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif //DRIVINGSIMULATOR_CAR_H
