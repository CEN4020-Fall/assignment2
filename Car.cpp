//
// Created by Esteban Parra on 9/5/19.
//

#include "Car.h"


Car::Car() {
    myEngineSize = "unknown";
}

Car::Car(string engineSize) {
    setEngineSize(engineSize);
}

string Car::getEngineSize() {
    return myEngineSize;
}

void Car::setEngineSize(string engineSize) {
    myEngineSize = engineSize;
}

double Car::mileageEstimate(double time) {
    double mileage = 15 * time;
    if (fuelType == "electricity") {
        mileage += mileage * 0.05;
    }
    return mileage;
}