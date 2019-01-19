//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVERSREPOSITORY_H
#define OOPPROJECT_DRIVERSREPOSITORY_H


#include "Driver.h"
#include "repository.h"
#include <memory>

class DriversRepository: public Repository<Driver_ptr> {

public:
    DriversRepository();
    bool add(Driver_ptr Driver);
    bool remove(Driver_ptr Driver);
    std::list<Driver_ptr> getAll();
    ~DriversRepository();
};
typedef shared_ptr<DriversRepository>DR_ptr;

#endif //OOPPROJECT_DRIVERSREPOSITORY_H
