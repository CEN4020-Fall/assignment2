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

	explicit Jet(string brand, string model, string fuelType, string engineSize, int engineNum);

	virtual ~Jet();
	string getEngineSize();
	string getEngineNum();
	void setEngineSize(string engineSize);
	void setEngineNum(int engineNum);
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif //DRIVINGSIMULATOR_CAR_H
