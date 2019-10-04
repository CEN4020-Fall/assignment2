//
// Created by Taylor Driver on 10/3/19
//

#include "RollerCoaster.h"

RollerCoaster::RollerCoaster() {
	myEngineSize = "unknown";
	myManufacturer = "unknown";
	myName = "unknown";
	myModel = "unknown";
}

RollerCoaster::RollerCoaster(string manufacturer, string name, string model, string fuelType, string engineSize) {
	setManufacturer(manufacturer);
	setName(name);
	setModel(model);
	setFuelType(fuelType);
	setEngineSize(engineSize);
}


RollerCoaster::~RollerCoaster() = default;

string RollerCoaster::getEngineSize() {
	return myEngineSize;
}

string RollerCoaster::getManufacturer() {
	return myManufacturer;
}

string RollerCoaster::getName() {
	return myName;
}

string RollerCoaster::getModel() {
	return myModel;
}

void RollerCoaster::setEngineSize(string engineSize) {
	if(engineSize == "unknown" || engineSize == "small" || engineSize == "medium" || engineSize == "grande") 
 		myEngineSize = engineSize;
	else
		myEngineSize = "unknown";
}

void RollerCoaster::setManufacturer(string manufacturer) {
	myManufacturer = manufacturer;
}

void RollerCoaster::setName(string name) {
	myName = name;
}

void RollerCoaster::setModel(string model) {
	myModel = model;
}

double RollerCoaster::mileageEstimate(double time) {
	//srand((unsigned)time(0));
	double mileage = time * 20;

	if(myModel == "Wooden") 
		double mileage = time * ((rand() % 72-4) + 5);
	
		
return mileage;
}


string RollerCoaster::toString() {
	return "-> RollerCoaster" + std::string("\n\tManufacturer: ") + getManufacturer() + std::string("\n\tModel: ") + getModel() + std::string("\n\tName: ") + getName() + std::string("\n\tFuel Type: ") + getFuelType() + std::string("\n\tEngine Size: ") + getEngineSize();
}
