//
// Created by Esteban Parra on 9/5/19.
//

//Edits made by Nicholas Watts where noted

#ifndef DRIVINGSIMULATOR_BICYCLE_H
#define DRIVINGSIMULATOR_BICYCLE_H

#include "Vehicle.h"

class Bicycle : public Vehicle {

private:
    int myGearCount;
    int numberOfGears;	//NW added member data
    int mileage;

public:
    explicit Bicycle(string brand, string model, int gearCount = 1, 
			int numberOfGears = 3, int mileage = 3);	
//NW added default parameter

    virtual ~Bicycle();
    int getGearCount();
    void setGearCount(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
