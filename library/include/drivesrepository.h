//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVESREPOSITORY_H
#define OOPPROJECT_DRIVESREPOSITORY_H


#include "repository.h"
#include "Drive.h"
#include "Driver.h"
#include <memory>
class Drive;
class Driver;
typedef shared_ptr<Drive>Drive_ptr;
typedef shared_ptr<Driver>Driver_ptr;
class DrivesRepository: public Repository<Drive_ptr> {

public:
    DrivesRepository();
    bool add(Drive_ptr drive);
    bool remove(Drive_ptr drive);
    std::list<Drive_ptr> getAll();
    ~DrivesRepository();
};

typedef shared_ptr<DrivesRepository>DRs_ptr;
#endif //OOPPROJECT_DRIVESREPOSITORY_H
