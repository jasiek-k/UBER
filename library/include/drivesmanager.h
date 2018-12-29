//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVESMANAGER_H
#define OOPPROJECT_DRIVESMANAGER_H


#include "drivesrepository.h"

class DrivesManager {
private:
    DrivesRepository drivesRepository;
public:
    DrivesManager();
    bool addDrive(Drive driver);
    bool removerDrive(Drive driver);
    Drive find(int rating);
    Drive find(double price);
    list<Drive>getAllDrives();
    string showDrivesInfo();
    ~DrivesManager();

};


#endif //OOPPROJECT_DRIVESMANAGER_H
