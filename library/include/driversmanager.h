//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVERSMANAGER_H
#define OOPPROJECT_DRIVERSMANAGER_H


#include "Driver.h"
#include "driversrepository.h"
#include <memory>
class DriversManager {
private:
    DR_ptr driversRepository;
public:
    DriversManager();
    bool addDriver(Driver_ptr driver);
    bool removerDriver(Driver_ptr driver);
    Driver_ptr find(string name);
    list<Driver_ptr>getAllDrivers();
    string showDriversInfo();
    ~DriversManager();
};
typedef shared_ptr<DriversManager>DRM_ptr;


#endif //OOPPROJECT_DRIVERSMANAGER_H
