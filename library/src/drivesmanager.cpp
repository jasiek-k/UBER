//
// Created by Mateusz on 28.12.2018.
//

#include "drivesmanager.h"
DrivesManager::DrivesManager() {}
void DrivesManager::addDrive(Drive drive) {DrivesManager::drivesRepository.add(drive);}
bool DrivesManager::removerDrive(Drive drive) {DrivesManager::drivesRepository.remove(drive);}
list<Drive> DrivesManager::getAllDrives() {DrivesManager::drivesRepository.getAll();}
Drive DrivesManager::find(int rating) {DrivesManager::drivesRepository.find(rating);}
Drive DrivesManager::find(double price) {DrivesManager::drivesRepository.find(price);}
string DrivesManager::showDrivesInfo() {DrivesManager::drivesRepository.showInfo();}
DrivesManager::~DrivesManager() {}