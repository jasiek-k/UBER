//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_LIMOUSINE_H
#define OOPPROJECT_LIMOUSINE_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Limousine:public Vehicle {
private:
    int extravagance;
public:
    int getExtravagance();
    virtual double getPrice();
    Limousine(int,int,string);
    virtual string vehicleInfo();
};
typedef shared_ptr<Limousine>L_ptr;

#endif //OOPPROJECT_LIMOUSINE_H
