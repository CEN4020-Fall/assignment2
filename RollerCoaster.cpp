//
// Created by Taylor Driver on 10/3/19
//

#include "RollerCoaster.h"

RollerCoaster::RollerCoaster() {
	myEngineSize = "unknown";
	setManufacturer("B&M");
	setModel("Wooden");
}

RollerCoaster::RollerCoaster(string manufacturer, stirng model, string fuelType, string engineSize) {
	setManufacturer(manufacturer);
	setModel(model);
	setFuelType(fuelType);
	setEngineSize(engineSize);
}


RollerCoaster::~RollerCoaster() = default;

string RollerCoaster::getEngineSize() {
	return myEngineSize;
}

void RollerCoaster::setEngineSize(string engineSize) {
	if(engineSize == "unknown" || engineSize == "small" || engineSize == "medium" || engineSize == "grande") {
 		myEngineSize = engineSize;
	else
		myEngineSize = "unknown";
}

double RollerCoaster::mileageEstimate(double time) {
	srand((unsigned)time(0));
	//double mileage = time * 20;

	if(model == "Wooden") {
		double mileage = time * ((rand() % 72-4) + 5);
	
		
return mileage;
}


string RollerCoaster::toString() {
	return "-> RollerCoaster\n" + PoweredVehicle::toString() + "\n\tEngine Size: " + getEngineSize();
}
