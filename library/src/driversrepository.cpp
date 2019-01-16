//
// Created by Mateusz on 28.12.2018.
//

#include <driverexception.h>
#include <driversrepository.h>

#include "driversrepository.h"


DriversRepository::DriversRepository() {}

bool DriversRepository::add(Driver_ptr driver) {
    if (this->find(driver->getName()) != nullptr) {
        return false;
    } else {
        Repository::lista.push_back(driver);
        return true;
    }
}

bool DriversRepository::remove(Driver_ptr driver) {
    for (Driver_ptr driver1: Repository::lista) {
        if (driver->getName() == driver1->getName()) {
            Repository::lista.remove(driver);
            return true;
        }
    }
    return false;
}

std::list<Driver_ptr> DriversRepository::getAll() {
    list<Driver_ptr> temp;
    for (Driver_ptr driver: Repository::lista) {
        temp.push_back(driver);
    }
    return lista;

}

Driver_ptr DriversRepository::find(string name) {
    for (Driver_ptr driver: Repository::lista) {
        if (driver->getName() == name) {
            return driver;
        }
    }
    return nullptr;
}

string DriversRepository::showInfo() {
    return " driversinfo";
}

DriversRepository::~DriversRepository() {

}

