#include <driverexception.h>
#include "driversmanager.h"

DriversManager::DriversManager() {}

bool DriversManager::addDriver(Driver_ptr driver) {

    if(DriversManager::driversRepository.add(driver))
    return true;
    else throw DriverException();

}

bool DriversManager::removerDriver(Driver_ptr driver) {
    if(DriversManager::driversRepository.remove(driver))
        return true;
    else throw DriverException();
}

list<Driver_ptr> DriversManager::getAllDrivers() {
    return DriversManager::driversRepository.getAll();
}
/*
Driver DriversManager::find(bool busy) { return DriversManager::driversRepository.find(busy); }

Driver DriversManager::find(string name) { return DriversManager::driversRepository.find(name); }
*/
string DriversManager::showDriversInfo() { return DriversManager::driversRepository.showInfo(); }

DriversManager::~DriversManager() {}