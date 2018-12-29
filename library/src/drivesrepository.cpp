//
// Created by Mateusz on 28.12.2018.
//

#include "drivesrepository.h"
#include<string>
#include <driveexception.h>

DrivesRepository::DrivesRepository() {}

bool DrivesRepository::add(Drive drive) { Repository::lista.push_back(drive); return true; }

bool DrivesRepository::remove(Drive drive) {  for (Drive drive: Repository::lista) {Repository::lista.remove(drive);return true; }
throw new DriveException;
}

std::list<Drive> DrivesRepository::getAll() {
    list<Drive> temp;
    for (Drive drive: Repository::lista) {
        temp.push_back(drive);
    }
    if(!lista.empty())
    {return lista;}
    throw new DriveException;
}

Drive DrivesRepository::find(double price) {
    for (Drive drive: Repository::lista) {
        if (drive.conductPrice() == price) {
            return drive;
        }
    }
    throw new DriveException;
}

Drive DrivesRepository::find(int rating) {
    for (Drive drive: Repository::lista) {
        if (drive.checkRating() == rating) {
            return drive;
        }
    }
    throw new DriveException;
}
string DrivesRepository::showInfo()
    {
        return " drivesinfo";
    }

