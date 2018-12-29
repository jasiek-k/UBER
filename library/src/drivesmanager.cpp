//
// Created by Mateusz on 28.12.2018.
//

#include "drivesmanager.h"
DrivesManager::DrivesManager() {}
bool DrivesManager::addDrive(Drive drive) {return DrivesManager::drivesRepository.add(drive);}
bool DrivesManager::removerDrive(Drive drive) {return DrivesManager::drivesRepository.remove(drive);}
list<Drive> DrivesManager::getAllDrives() {return DrivesManager::drivesRepository.getAll();}
Drive DrivesManager::find(int rating) {return DrivesManager::drivesRepository.find(rating);}
Drive DrivesManager::find(double price) {return DrivesManager::drivesRepository.find(price);}
string DrivesManager::showDrivesInfo() {return DrivesManager::drivesRepository.showInfo();}
DrivesManager::~DrivesManager() {}