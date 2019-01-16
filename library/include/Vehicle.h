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
    Vehicle(int,string);
    virtual double getPrice()=0;
    virtual string vehicleInfo();
    int getSeats();
    string getRegNr();
    ~Vehicle()= default;
};
typedef shared_ptr<Vehicle>Vehicle_ptr;

#endif //OOPPROJECT_VEHICLE_H
