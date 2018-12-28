//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_DRIVE_H
#define OOPPROJECT_DRIVE_H

#include <memory>
#include <iostream>
using namespace std;

class Drive {
private:
    double price;
    double distance;
    float rate;
    //beginDate
    //endDate
public:
    float conductPrice();
    void finishRide();
    string rideInfo();
    bool checkStatus();

    int checkRating();
};


#endif //OOPPROJECT_DRIVE_H
