#include <driverexception.h>
#include <driversrepository.h>

#include "driversrepository.h"


DriversRepository::DriversRepository() {}

bool DriversRepository::add(Driver_ptr driver) {
    Repository::lista.push_back(driver);
    return true;
}

bool DriversRepository::remove(Driver_ptr driver) {

            Repository::lista.remove(driver);
            return true;
}

std::list<Driver_ptr> DriversRepository::getAll() {
    list<Driver_ptr> temp;
    for (Driver_ptr driver: Repository::lista) {
        temp.push_back(driver);
    }
    return lista;

}

DriversRepository::~DriversRepository() {

}

