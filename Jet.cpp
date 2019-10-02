//
// Created by Esteban Parra on 9/5/19.
//
#include <cstdlib>
#include <ctime>
#include "Jet.h"

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
    setNumberofEngines(1);
}

Jet::Jet(string brand, string model, string fuelType, string engineSize, int numberOfEngines=1) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
    setNumberofEngines(numberOfEngines)
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
    double mileage = (rand()%(100-40)+40) * time;
    if (fuelType == "rocket" && numberOfEngines>=2) {
        mileage += mileage * (0.055);
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();

void Jet::setNumberofEngines(int ne)
{
  numEngines=ne;
}
}
