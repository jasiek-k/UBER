//
// Created by Mateusz on 28.12.2018.
//

#include "driversrepository.h"


DriversRepository::DriversRepository() {}

void DriversRepository::add(Driver driver) { Repository::lista.push_back(driver); }

bool DriversRepository::remove(Driver driver) { Repository::lista.remove(driver); }

std::list<Driver> DriversRepository::getAll() {
    list<Driver> temp;
    for (Driver driver: Repository::lista) {
        temp.push_back(driver);
    }
    return lista;
}

Driver DriversRepository::find(string name) {
    for (Driver driver: Repository::lista) {
        if (driver.getName() == name) {
            return driver;
        }
    }
}
Driver DriversRepository::find(bool busy) {
    for (Driver driver: Repository::lista) {
        if (driver.getStatus()== busy) {
            return driver;
        }
    }
}

string DriversRepository::showInfo() {
    return " driversinfo";
}

