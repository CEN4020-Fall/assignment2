//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_VEHICLE_H
#define DRIVINGSIMULATOR_VEHICLE_H

#include <string>     // std::string, std::stoi

using namespace std;

class Vehicle {

private :
    string myBrand, myModel;

public:
    explicit Vehicle(string brand = "unknown", string model = "unknown");

    virtual ~Vehicle();
    string getBrand();
    void setBrand(string brand);
    string getModel();
    void setModel(string model);
    virtual string toString();
    virtual double mileageEstimate(
            double time) = 0; // Method that computes how many miles can be traversed by the vehicle in the given amount of time. The time parameter is given in minutes
};


#endif //DRIVINGSIMULATOR_VEHICLE_H
