//
// Created by Esteban Parra on 9/5/19.
//

#ifndef DRIVINGSIMULATOR_TANK_H
#define DRIVINGSIMULATOR_TANK_H

#include "PoweredVehicle.h"

class Tank : public PoweredVehicle {

private:
    string nickname;
    int numberofGuns;
    string camoflauge;
    string misson;

public:
    Jet();

    explicit Jet(string camo, string nickname,string misson, int numberofGuns);
    virtual ~Jet();
    void getnumberofGuns();
    Void setnumberofGuns(int m);
    void setMission(string m);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_CAR_H
