//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVERSMANAGER_H
#define OOPPROJECT_DRIVERSMANAGER_H


#include "Driver.h"
#include "driversrepository.h"

class DriversManager {
private:
    DriversRepository driversRepository;
public:
    DriversManager();
    bool addDriver(Driver driver);
    bool removerDriver(Driver driver);
    Driver find(string name);
    Driver find(bool busy);
    list<Driver>getAllDrivers();
    string showDriversInfo();
    ~DriversManager();
};


#endif //OOPPROJECT_DRIVERSMANAGER_H
