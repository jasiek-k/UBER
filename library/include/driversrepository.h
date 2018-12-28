//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVERSREPOSITORY_H
#define OOPPROJECT_DRIVERSREPOSITORY_H


#include "Driver.h"
#include "repository.h"

class DriversRepository: public Repository<Driver> {

public:
    DriversRepository();
    void add(Driver Driver);
    bool remove(Driver Driver);
    Driver find(string name);
    Driver find(bool busy);
    std::list<Driver> getAll();
    string showInfo();
    ~DriversRepository();

};


#endif //OOPPROJECT_DRIVERSREPOSITORY_H
