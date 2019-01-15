//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVESREPOSITORY_H
#define OOPPROJECT_DRIVESREPOSITORY_H


#include "repository.h"
#include "Drive.h"
#include <memory>
typedef shared_ptr<Drive>Drive_ptr;
class DrivesRepository: public Repository<Drive_ptr> {

public:
    DrivesRepository();
    bool add(Drive_ptr drive);
    bool remove(Drive_ptr drive);
    Drive find(double price);
    Drive find(int rating);
    std::list<Drive_ptr> getAll();
    string showInfo();
    ~DrivesRepository();


};


#endif //OOPPROJECT_DRIVESREPOSITORY_H
