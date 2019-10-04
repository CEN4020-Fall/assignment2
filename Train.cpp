//train.cpp
//
// Conner Flynn (cjf16e) 10/2/19

#include "Train.h"

Train::Train() {
    myEngineSize = "none";
    setBrand("Amtrak");
    setModel("ACS-64");
}

Train::Train(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Train::~Train() = default;

string Train::getEngineSize() {
    return myEngineSize;
}

void Train::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Train::mileageEstimate(double time) {
    //	electric locomotive top speed (w/ passengers): 200 (3.33 mi/min)
	//	diesel locomotive top speed (w/ passengers): 140 (2.33 mi/min)
	double mileage = 2.33 * time;	//diesel
    if (fuelType == "electricity") {
        mileage += mileage * 0.45;	//~200
    }
	else if (myEngineSize == "grande"){
		mileage += mileage * 0.1;	//10% increase for largest engine
	}
    return floor(mileage);
}

string Train::toString() {
    return "-> Train\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}

