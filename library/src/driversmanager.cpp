#include "driversmanager.h"
DriversManager::DriversManager() {}
void DriversManager::addDriver(Driver driver) {DriversManager::driversRepository.add(driver);}
bool DriversManager::removerDriver(Driver driver) {DriversManager::driversRepository.remove(driver);}
list<Driver> DriversManager::getAllDrivers() {DriversManager::driversRepository.getAll();}
Driver DriversManager::find(bool busy) {DriversManager::driversRepository.find(busy);}
Driver DriversManager::find(string name) {DriversManager::driversRepository.find(name);}
string DriversManager::showDriversInfo() {DriversManager::driversRepository.showInfo();}
DriversManager::~DriversManager() {}