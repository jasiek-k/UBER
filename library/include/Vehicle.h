//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_VEHICLE_H
#define OOPPROJECT_VEHICLE_H

#include <memory>
#include <iostream>
using namespace std;

class Vehicle {
private:
    int seats;
    string registnr;
public:
    virtual double getPrice()=0;
    Vehicle(int,string);
    virtual string vehicleInfo();
    int getSeats();
    string getRegNr();
};
typedef shared_ptr<Vehicle>Vehicle_ptr;

#endif //OOPPROJECT_VEHICLE_H
