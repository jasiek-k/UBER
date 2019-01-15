//
// Created by pobi on 26.12.18.
//

#include "Limousine.h"
#include <sstream>
int Limousine::getExtravagance() {
    return extravagance;
}

double Limousine::getPrice() {
    if(extravagance==1) return 3;
    else if(extravagance==2) return 4;
    else if(extravagance==3) return 5;
    ///WYJĄTEK TUTAJ
}
Limousine::Limousine(int seat, int extra, string nr):Vehicle(seat,nr)
{
    this->extravagance=extra;
}

string Limousine::vehicleInfo(){
    stringstream tmp;
    tmp << extravagance;
    return Vehicle::vehicleInfo() + " - rate: " + tmp.str()+ "/3";
}
