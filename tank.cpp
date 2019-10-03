//
//Kristen Davis
//
#include <cstdlib>
#include <ctime>
#include "Tank.h"

Tank::Tank() {
    nickname="Company X"
    setMisson("Training");
    camoflauge="desert";
    setnumberofGuns(2);
}

Tank::Tank(string camo, string n,string m, int num=2) {
    camoflauge=camo;
     setMisson(m);
    nickname=n;
    setNumberofGuns(num);
}

Tank::~Tank() = default;

void Tank::getnumberofGuns() {
    return numberofGuns;
}

void Tank::setMisson(string m);
{
  misson=m;
}
double Tank::mileageEstimate(double time) {
    double mileage=0;
    if(misson=="training")
    {
      mileage=(rand()%(25-10 +1)+10)*time;
    }
    else if(misson=="desert")
    {
        mileage=(rand()%(45-10 +1)+10)*time;
    }
    else
    {
        mileage=(rand()%(55-10 +1)+10)*time;
    }
    return mileage;
}

string Tank::toString() {
    return "-> Tank\n" + PoweredVehicle::toString() + "\n Number of Guns: " +
           to_string(numberofGuns);

void Tank::setNumberofGuns(int ne)
{
  numberofGuns=ne;
}
