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
    virtual string vehicleInfo();
};
typedef shared_ptr<DailyCars>DC_ptr;

#endif //OOPPROJECT_DAILYCARS_H
