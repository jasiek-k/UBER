//
// Created by pobi on 26.12.18.
//

#include "Driver.h"

Driver::Driver(string n, string sn, Vehicle_ptr ptr)
{
    this->name=n;
    this->surname=sn;
    this->ifBusy=false;
    this->vehicle=ptr;
}

Drive Driver::actualRide()
{
return Drive();
}

void Driver::payForRide()
{

}

string Driver::DriverInfo()
{
    if(getStatus())  return "Driver Info: " + name + " " + surname + " status: busy " + vehicle->vehicleInfo();
    if(!getStatus())  return "Driver Info: " + name + " " + surname + " status: free to go " + vehicle->vehicleInfo();
}

bool Driver::getStatus()
{
    return ifBusy;
}

string Driver::getName()
{
    return name;
}

string Driver::getSurname()
{
   return surname;
}

Vehicle_ptr Driver::getVehicle()
{
    return vehicle;
}

void Driver::setVehicle(Vehicle_ptr ptr)
{
    this->vehicle=ptr;
}