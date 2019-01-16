//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVESMANAGER_H
#define OOPPROJECT_DRIVESMANAGER_H


#include "drivesrepository.h"
#include "driveexception.h"

class DrivesManager {
private:
    DrivesRepository drivesRepository;
public:
    DrivesManager();
    bool addDrive(Drive_ptr drive);
    bool addDrive(Client_ptr client, Driver_ptr driver);
    bool removerDrive(Drive_ptr driver);
    Drive_ptr find(double price);
    Drive_ptr find(Client_ptr client);
    Drive_ptr find(Driver_ptr driver);
    list<Drive_ptr>getAllDrives();
    string showDrivesInfo();
    ~DrivesManager();

};


#endif //OOPPROJECT_DRIVESMANAGER_H
