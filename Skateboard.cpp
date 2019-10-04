//
// Jason Santos
//

#include "Skateboard.h"
#include <ctime>
#include <cstdlib> 
#include <iostream>

Skateboard::Skateboard(){
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;


double Skateboard::mileageEstimate(double time) {
    std::srand(std::time(NULL)); 
    double rand = (std::rand() % (500 - 100 + 1) + 100) / 1000.0 ; 
    double mileage = rand * time;
    double addedMileage = 0;
    if(time > 25 && time < 250){
	   int temp = time / 3;    
    	addedMileage = (std::rand() % temp + 1);
        mileage += addedMileage;	
    }
	
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
