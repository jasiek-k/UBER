
#include <drivesmanager.h>

#include "drivesmanager.h"

DrivesManager::DrivesManager() {
    this->drivesRepository= DRs_ptr(new DrivesRepository());
}

bool DrivesManager::addDrive(Client_ptr client, Driver_ptr driver) {
    try {
        find(client);
        find(driver);
    }
    catch (DriveException) {
        try {
            Drive_ptr rent(new Drive(driver, client));
            return DrivesManager::drivesRepository->add(rent);
        }
        catch (DriveException) {
            cout << "Creating drive error" << endl;
            throw DriveException();
        }
    }
    throw DriveException();
}

bool DrivesManager::addDrive(Drive_ptr drive) {
    list<Drive_ptr> listka = this->getAllDrives();
    if (listka.empty()) {
        throw DriveException();
    }
    for (Drive_ptr drive1: listka) {
        if (find(drive->getClient()) == find(drive1->getClient())) {
            return DrivesManager::drivesRepository->add(drive);
        }
    }
    throw DriveException();
}


bool DrivesManager::removerDrive(Drive_ptr drive) {

    list<Drive_ptr> listka = this->getAllDrives();
    if (listka.empty()) {
        throw DriveException();
    }
    for (Drive_ptr drive1: listka) {
        if (drive1->getClient()->getName() == drive->getClient()->getName()) {
            this->drivesRepository->remove(drive);
            return true;
        }
    }
    throw DriveException();
}


list<Drive_ptr> DrivesManager::getAllDrives() {
    return DrivesManager::drivesRepository->getAll();
}


Drive_ptr DrivesManager::find(double price) {
    list<Drive_ptr> listka = this->getAllDrives();
    if (listka.empty()) {
        throw DriveException();
    }
    for (Drive_ptr drive: listka) {
        if (drive->conductPrice() == price) {
            return drive;
        }
    }
    throw DriveException();
}


Drive_ptr DrivesManager::find(Client_ptr client) {

    list<Drive_ptr> listka = this->getAllDrives();
    if (listka.empty()) {
        throw DriveException();
    }
    for (Drive_ptr drive: listka) {
        if (drive->getClient() == client) {
            return drive;
        }
    }
    throw DriveException();
}

Drive_ptr DrivesManager::find(Driver_ptr driver) {

    list<Drive_ptr> listka = this->getAllDrives();
    if (listka.empty()) {
        throw DriveException();
    }
    for (Drive_ptr drive: listka) {
        if (drive->getDriver() == driver) {
            return drive;
        }
    }
    throw DriveException();
}


string DrivesManager::showDrivesInfo() {
    list<Drive_ptr> listka = this->getAllDrives();
    string temp = "";
    for (Drive_ptr drive: listka) {
        temp += drive->driveInfo() + "\n";
    }
    return "DrivesInfo: " + temp;
}

DrivesManager::~DrivesManager() {}

bool DrivesManager::endOfDrive(Client_ptr client) {
    try {
        Drive_ptr drive = this->find(client);
        drive->finishRide();
        return true;

    }
    catch (DriveException) {

    }
    throw DriveException();
}

float DrivesManager::getPriceForFinishedRide(Client_ptr client) {
    try {
        Drive_ptr drive = this->find(client);
        if(drive->isIfFinished())
        {
            return drive->conductPrice()*1.00;
        }
        else{
            throw DriveException();
        }
    }
    catch (DriveException) {

    }
    throw DriveException();
}


