//
// Created by pobi on 26.12.18.
//

#include "DailyCars.h"

DailyCars::DailyCars(int seat, string nr):Vehicle(seat,nr){}

double DailyCars::getPrice(){
    return 2;
}

string DailyCars::vehicleInfo(){
    return Vehicle::vehicleInfo();
}
