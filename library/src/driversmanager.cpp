#include <driverexception.h>
#include "driversmanager.h"

DriversManager::DriversManager() {
    this->driversRepository= DR_ptr(new DriversRepository());
}

bool DriversManager::addDriver(Driver_ptr driver) {

    /*  if(find(driver->getName())== nullptr) {
          DriversManager::driversRepository.add(driver);
          return true;
      }
      else {
          throw DriverException();
      }
      */
    try {
        Driver_ptr driver1 = find(driver->getName());
    }
    catch (DriverException) {
        DriversManager::driversRepository->add(driver);
        return true;
    }
    throw DriverException();
}

bool DriversManager::removerDriver(Driver_ptr driver) {
    /* if(find(driver->getName())!= nullptr) {
            DriversManager::driversRepository.remove(driver);
            return true;
        }
        else{
            throw DriverException();
        }
    */
    try {
        Driver_ptr driver1 = find(driver->getName());
        DriversManager::driversRepository->remove(driver);
        return true;
    }
    catch (DriverException) {

    }
    throw DriverException();
}


list<Driver_ptr> DriversManager::getAllDrivers() {
    return DriversManager::driversRepository->getAll();
}


Driver_ptr DriversManager::find(string name) {

    list<Driver_ptr> temp = this->driversRepository->getAll();

    if (temp.empty()) {
        // return nullptr;
        throw DriverException();
    }

    for (Driver_ptr driver: temp) {
        if (driver->getName() == name) {
            return driver;
        }
    }
    //return nullptr;
    throw DriverException();

}

string DriversManager::showDriversInfo() {

    string temp1 = "";
    list<Driver_ptr> temp = this->driversRepository->getAll();
    for (Driver_ptr driver: temp) {
        temp1 += driver->driverInfo() + " \n";
    }
    return " Driversinfo\n" + temp1;
}

DriversManager::~DriversManager() {}