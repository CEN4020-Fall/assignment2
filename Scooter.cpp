//
// Created by Esteban Parra on 9/5/19.
//

#include "Scooter.h"

Scooter::Scooter()
{
    setBrand("Custom");
    setModel("VTx");
}

Scooter::Scooter(string brand, string model, string fuelType)
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
}

Scooter::~Scooter() = default;


double Scooter::mileageEstimate(double time)
{
    double mileage = 15 * time;
    if (fuelType == "diesal")
    {
        mileage += mileage * 0.09;
    }
    return mileage;
}

string Scooter::toString()
{
    return "-> Scooter\n" + PoweredVehicle::toString();
}