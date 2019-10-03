#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Skateboard.h"

class Skateboard : public Vehicle {

public:
	explicit Skateboard(string brand, string model);

	virtual ~Skateboard();
	virtual double mileageEstimate(double time);
	virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
