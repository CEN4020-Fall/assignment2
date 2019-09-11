//
// Created by Esteban Parra on 9/5/19.
//

#include "Car.h"

Car::Car() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Car::Car(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Car::~Car() = default;

string Car::getEngineSize() {
    return myEngineSize;
}

void Car::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Car::mileageEstimate(double time) {
    double mileage = 15 * time;
    if (fuelType == "electricity") {
        mileage += mileage * 0.05;
    }
    return mileage;
}

string Car::toString() {
    return "-> Car\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}