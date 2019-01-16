#include "drivesmanager.h"

DrivesManager::DrivesManager() {}

bool DrivesManager::addDrive(Client_ptr client, Driver_ptr driver) {
    if ((this->drivesRepository.find(client) == nullptr) && (this->drivesRepository.find(driver) == nullptr)) {
        try {
            Drive_ptr rent(new Drive(driver, client));
            return DrivesManager::drivesRepository.add(rent);
        }
        catch (DriveException) {
            cout<<"Creating drive error"<<endl;
            throw DriveException();
        }
    } else
        throw DriveException();
}

bool DrivesManager::addDrive(Drive_ptr drive) {
    return DrivesManager::drivesRepository.add(drive);
}


bool DrivesManager::removerDrive(Drive_ptr drive) {
    if (DrivesManager::drivesRepository.remove(drive)) {
        return true;
    }
    throw DriveException();
}


list<Drive_ptr> DrivesManager::getAllDrives() {
    return DrivesManager::drivesRepository.getAll();
}


Drive_ptr DrivesManager::find(double price) {
    return DrivesManager::drivesRepository.find(price);
}


string DrivesManager::showDrivesInfo() {
    return DrivesManager::drivesRepository.showInfo();
}


Drive_ptr DrivesManager::find(Client_ptr client) {

    if (this->drivesRepository.find(client) != nullptr)
        return this->drivesRepository.find(
                client); //to trzeba zamienic na przypisanie do zmiennej i zwrot bo chujowo tak ale nwm jak sie robi ptr

    else
        throw DriveException();
}


Drive_ptr DrivesManager::find(Driver_ptr driver) {
    if (this->drivesRepository.find(driver) != nullptr)
        return this->drivesRepository.find(
                driver); //to trzeba zamienic na przypisanie do zmiennej i zwrot bo chujowo tak ale nwm jak sie robi ptr

    else
        throw DriveException();
}

DrivesManager::~DrivesManager() {}
