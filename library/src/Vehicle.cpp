//
// Created by pobi on 26.12.18.
//

#include <sstream>
#include "Vehicle.h"

Vehicle::Vehicle(int sea, string nr)
{
    this->seats=sea;
    this->registnr=nr;
}

string Vehicle::vehicleInfo()
{
    stringstream tmp;
    tmp << "seats: " << seats << " - registration number: " << registnr;
    return tmp.str();
}

int Vehicle::getSeats()
{
    return seats;
}

string Vehicle::getRegNr()
{
    return registnr;
}