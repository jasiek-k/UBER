#include "driversmanager.h"
DriversManager::DriversManager() {}
bool DriversManager::addDriver(Driver driver) {return DriversManager::driversRepository.add(driver);}
bool DriversManager::removerDriver(Driver driver) {return DriversManager::driversRepository.remove(driver);}
list<Driver> DriversManager::getAllDrivers() {return DriversManager::driversRepository.getAll();}
Driver DriversManager::find(bool busy) {return DriversManager::driversRepository.find(busy);}
Driver DriversManager::find(string name) {return DriversManager::driversRepository.find(name);}
string DriversManager::showDriversInfo() {return DriversManager::driversRepository.showInfo();}
DriversManager::~DriversManager() {}