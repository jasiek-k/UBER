//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_DRIVER_H
#define OOPPROJECT_DRIVER_H

#include <memory>
#include <iostream>
#include "Vehicle.h"
#include "Drive.h"

using namespace std;

class Driver {
private:
    //Repository ride;
    string name;
    string surname;
    bool ifBusy;
    Vehicle_ptr vehicle;
public:
    Drive actualRide();
    void payForRide();
    string DriverInfo();
    Driver(string,string,Vehicle_ptr);
    bool getStatus();
    string getName();
    string getSurname();
    Vehicle_ptr getVehicle();
    void setVehicle(Vehicle_ptr);
};


#endif //OOPPROJECT_DRIVER_H
