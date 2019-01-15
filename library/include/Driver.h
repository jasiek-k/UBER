//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_DRIVER_H
#define OOPPROJECT_DRIVER_H

#include <memory>
#include <iostream>
#include "Vehicle.h"
#include "Drive.h"
#include "drivesrepository.h"

using namespace std;

class Driver {
private:
    DrivesRepository ride;
    string name;
    Vehicle_ptr vehicle;
public:
    Drive actualDrive();
    string DriverInfo();
    Driver(string,Vehicle_ptr);
    string getName();
    Vehicle_ptr getVehicle();
    double getVehiclePrice();
};
typedef shared_ptr<Driver>Driver_ptr;

#endif //OOPPROJECT_DRIVER_H
