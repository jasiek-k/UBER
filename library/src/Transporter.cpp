//
// Created by pobi on 26.12.18.
//

#include "Transporter.h"
#include <sstream>

Transporter::Transporter(int seat, int ld, string nr):Vehicle(seat,nr)
{
    this->load=ld;
}

int Transporter::getLoad() {
    return load;
}

double Transporter::getPrice() {
    if(load>0 && load<=500 ) return 2.0;
    else if(load>500 && load<=1000) return 2.5;
    else if(load>1000 && load<=1500) return 3.0;
    else if(load>1500 && load<=2000) return 3.5;
    else if(load>2000 && load<=2500) return 4.0;
    ///WYJĄTEK TUTAJ
}

string Transporter::vehicleInfo(){
    stringstream tmp;
    tmp << load;
    return Vehicle::vehicleInfo() + " - load: " + tmp.str();
}
