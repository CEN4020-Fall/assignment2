//
// Created by Emilio Faim
//

#include "Jet.h"

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
    numberOfEngines = 1;
}

Jet::Jet(string brand, string model, string fuelType, string engineSize, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
    return myEngineSize;
}

void Jet::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Jet::mileageEstimate(double time) {
    int range = (100 - 40) + 1;
    int random = range * (rand() / (RAND_MAX + 1.0));

    double mileage = random * time;
    if (fuelType == "Rocket" && numberOfEngines >= 2) {
        mileage = mileage * (numberOfEngines*(0.055));
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
