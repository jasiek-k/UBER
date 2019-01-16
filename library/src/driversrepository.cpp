//
// Created by Mateusz on 28.12.2018.
//

#include <driverexception.h>
#include "driversrepository.h"


DriversRepository::DriversRepository() {}

bool DriversRepository::add(Driver_ptr driver) {
    Repository::lista.push_back(driver);
    return true;
}

bool DriversRepository::remove(Driver_ptr driver) {
    for (Driver_ptr driver1: Repository::lista) {
        if(true/*driver1==driver*/)//zmienić na wskaźniki albo zaimplementować equalsTo
        Repository::lista.remove(driver);
        return true;
    }
    return nullptr;
}

std::list<Driver_ptr> DriversRepository::getAll() {
    list<Driver_ptr> temp;
    for (Driver_ptr driver: Repository::lista) {
        temp.push_back(driver);
    }
        return lista;

    }
/*
Driver_ptr DriversRepository::find(string name) {
    for (Driver_ptr driver: Repository::lista) {
        if (driver->getName() == name) {
            return driver;
        }
    }
    return nullptr_t;
}
/*
Driver_ptr DriversRepository::find(bool busy) {
    for (Driver driver: Repository::lista) {
        if (driver.getStatus() == busy) {
            return driver;
        }
    }
    throw new DriverException;
}
*/
string DriversRepository::showInfo() {
    return " driversinfo";
}

