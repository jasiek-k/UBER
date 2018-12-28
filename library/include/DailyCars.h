//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_DAILYCARS_H
#define OOPPROJECT_DAILYCARS_H

#include "Vehicle.h"
#include <iostream>
using namespace std;

class DailyCars:public Vehicle {
public:
    DailyCars(int, string);
    virtual double getPrice();
};


#endif //OOPPROJECT_DAILYCARS_H
