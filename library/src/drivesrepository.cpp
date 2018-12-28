//
// Created by Mateusz on 28.12.2018.
//

#include "drivesrepository.h"
#include<string>

DrivesRepository::DrivesRepository() {}

void DrivesRepository::add(Drive drive) { Repository::lista.push_back(drive); }

bool DrivesRepository::remove(Drive drive) { Repository::lista.remove(drive); }

std::list<Drive> DrivesRepository::getAll() {
    list<Drive> temp;
    for (Drive drive: Repository::lista) {
        temp.push_back(drive);
    }
    return lista;
}

Drive DrivesRepository::find(double price) {
    for (Drive drive: Repository::lista) {
        if (drive.conductPrice() == price) {
            return drive;
        }
    }
}

Drive DrivesRepository::find(int rating) {
    for (Drive drive: Repository::lista) {
        if (drive.checkRating() == rating) {
            return drive;
        }
    }
}
string DrivesRepository::showInfo()
    {
        return " drivesinfo";
    }

