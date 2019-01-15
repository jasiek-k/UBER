//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_DRIVE_H
#define OOPPROJECT_DRIVE_H

#include <boost/date_time/posix_time/posix_time.hpp>
#include "boost/date_time/local_time/local_time.hpp"

#include <memory>
#include <iostream>
#include "Client.h"
#include "Driver.h"
//#include <Driver.h>
typedef shared_ptr<Driver>Driver_ptr;
typedef shared_ptr<Client>Client_ptr;

using namespace std;

class Drive {
private:
    double price;
    boost::posix_time::ptime beginDate;
    boost::posix_time::ptime endDate;
    Client_ptr client;
    Driver_ptr driver;
public:
    Drive(Driver_ptr,Client_ptr);
    float conductPrice();
    void finishRide();
    string driveInfo();
    bool checkStatus();
};
//typedef shared_ptr<Drive>Drive_ptr;



#endif //OOPPROJECT_DRIVE_H
