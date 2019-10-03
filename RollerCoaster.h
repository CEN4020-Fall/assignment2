//
// Created by Taylor Driver on 10/3/19
//

#ifndef DRIVIGSIMULATOR_ROLLERCOASTER_H
#define DRIVINGSIMULATOR_ROLLERCOASTER_H

#include "PoweredVehicle.h"

class RollerCoaster : public PoweredVehicle {

private:
	string myEngineSize;

public:
	RollerCoaster();

	explicit RollerCoaster(string manufacturer, string name, string model, string fuelType, string engineSize);

	virtual ~Rollercoaster();
	string getEngineSize();
	void setEngineSize(String engineSize);
	virtual double mileageEstimate(double time);
	virtual string toString();
};

#endif //DRIVINGSIMULATOR_ROLLERCOASTER_H
