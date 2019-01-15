//
// Created by pobi on 26.12.18.
//

#include "Driver.h"

Driver::Driver(string n, Vehicle_ptr ptr)
{
    this->name=n;
    this->vehicle=ptr;
}

Drive Driver::actualDrive()
{

}

string Driver::DriverInfo()
{
    return "Driver info - Name: " + name + " - Vehicle: " + vehicle->vehicleInfo();
   /* if(getStatus())  return "Driver Info: " + name + " status: busy " + vehicle->vehicleInfo();
    if(!getStatus())  return "Driver Info: " + name + " status: free to go " + vehicle->vehicleInfo();*/
}

string Driver::getName()
{
    return name;
}

Vehicle_ptr Driver::getVehicle()
{
    return vehicle;
}

double Driver::getVehiclePrice(){
    return vehicle->getPrice();
}
