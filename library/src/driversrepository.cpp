//
// Created by Mateusz on 28.12.2018.
//

#include <driverexception.h>
#include "driversrepository.h"


DriversRepository::DriversRepository() {}

bool DriversRepository::add(Driver driver) { Repository::lista.push_back(driver); }

bool DriversRepository::remove(Driver driver) {
    for (Driver driver1: Repository::lista) {
        if(true/*driver1==driver*/)//zmienić na wskaźniki albo zaimplementować equalsTo
        Repository::lista.remove(driver);
        return true;
    }
    throw new DriverException;
}

std::list<Driver> DriversRepository::getAll() {
    list<Driver> temp;
    for (Driver driver: Repository::lista) {
        temp.push_back(driver);
    }
    if(!lista.empty()) {
        return lista;
    }
    else throw new DriverException;
    }

Driver DriversRepository::find(string name) {
    for (Driver driver: Repository::lista) {
        if (driver.getName() == name) {
            return driver;
        }
    }
    throw new DriverException;
}

Driver DriversRepository::find(bool busy) {
    for (Driver driver: Repository::lista) {
        if (driver.getStatus() == busy) {
            return driver;
        }
    }
    throw new DriverException;
}

string DriversRepository::showInfo() {
    return " driversinfo";
}

