//
// Created by Robby on 10/6/19.
//

#include "Skateboard.h"
#include <time.h>
#include <math.h>

Skateboard::Skateboard() {}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double myTime) {
    srand( (unsigned int)time( NULL ));
    double max = 0.5, min = 0.1;

    //https://stackoverflow.com/questions/10776073/random-double-between-min-and-max
    double mileage = (rand()*(max-min)/((double)RAND_MAX-min))+min;

    if (myTime > 25 && myTime < 250){
        min = 1;
        max = myTime*1/3;
        double randMileage = (rand()*(max-min)/((double)RAND_MAX-min))+min;
        mileage += randMileage;
    }
    return mileage;
}