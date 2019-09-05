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
    Vehicle(string brand = "unknown", string model = "unknown") {
        setBrand(brand);
        setModel(model);
    }

    string getBrand() {
        return myBrand;
    }

    void setBrand(string brand) {
        myBrand = brand;
    }

    string getModel() {
        return myModel;
    }

    void setModel(string model) {
        myModel = model;
    }

    string toString() {
        return getBrand() + " " + getModel();
    }
};


#endif //DRIVINGSIMULATOR_VEHICLE_H
