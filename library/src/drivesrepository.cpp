//
// Created by Mateusz on 28.12.2018.
//

#include "drivesrepository.h"
#include <string>
#include <driveexception.h>


DrivesRepository::DrivesRepository() {}

bool DrivesRepository::add(Drive_ptr drive) {
    Repository::lista.push_back(drive); return true;
}

bool DrivesRepository::remove(Drive_ptr drive) {
    for (Drive_ptr drive1: Repository::lista) {
        if(drive1->getClient()->getName()== drive->getClient()->getName())
        Repository::lista.remove(drive);return true;
    }
return nullptr;
}

std::list<Drive_ptr> DrivesRepository::getAll() {
    list<Drive_ptr> temp;
    for (Drive_ptr drive: Repository::lista) {
        temp.push_back(drive);
    }
    return temp;
}

Drive_ptr DrivesRepository::find(double price) {
    for (Drive_ptr drive: Repository::lista) {
        if (drive->conductPrice() == price) {
            return drive;
        }
    }
    return nullptr;
}
Drive_ptr DrivesRepository::find(Client_ptr client) {
    for (Drive_ptr drive: Repository::lista) {
        if (drive->getClient()->getName() == client->getName()) {
            return drive;
        }
    }
    return nullptr;
}

Drive_ptr DrivesRepository::find(Driver_ptr driver) {
    for (Drive_ptr drive: Repository::lista) {
        if (drive->getDriver()->getName() == driver->getName()) {
            return drive;
        }
    }
    return nullptr;
}
string DrivesRepository::showInfo()
    {
        return " drivesinfo";
    }



