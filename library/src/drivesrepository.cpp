#include "drivesrepository.h"
#include <string>
#include <driveexception.h>
#include <drivesrepository.h>


DrivesRepository::DrivesRepository() {}

bool DrivesRepository::add(Drive_ptr drive) {
    Repository::lista.push_back(drive); return true;
}

bool DrivesRepository::remove(Drive_ptr drive) {

        Repository::lista.remove(drive);
        return true;
}

std::list<Drive_ptr> DrivesRepository::getAll() {
    list<Drive_ptr> temp;
    for (Drive_ptr drive: Repository::lista) {
        temp.push_back(drive);
    }
    return temp;
}

DrivesRepository::~DrivesRepository() {

}



