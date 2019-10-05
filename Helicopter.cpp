//
// Created by Emilio Faim
//

#include "Helicopter.h"

Helicopter::Helicopter() {
    myEngineSize = 1;
    setBrand("Custom");
    setModel("VTx");
}

Helicopter::Helicopter(string brand, string model, int engineSize) {
    setBrand(brand);
    setModel(model);
    setEngineSize(engineSize);
}

Helicopter::~Helicopter() = default;

int Helicopter::getEngineSize() {
    return myEngineSize;
}

void Helicopter::setEngineSize(int size) {
    myEngineSize = size;
}

double Helicopter::mileageEstimate(double time) {
    int range = (95 - 20) + 1;
    int random = range * (rand() / (RAND_MAX + 1.0));
    double mileage = random * time;

    if (myEngineSize > 1) {
        mileage = mileage * (myEngineSize * (0.5));
    }
    return mileage;
}

string Helicopter::toString() {
    return "-> Helicopter\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           Helicopter::getEngineSize();
}
