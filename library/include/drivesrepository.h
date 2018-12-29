//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_DRIVESREPOSITORY_H
#define OOPPROJECT_DRIVESREPOSITORY_H


#include "repository.h"
#include "Drive.h"

class DrivesRepository: public Repository<Drive> {

public:
    DrivesRepository();
    bool add(Drive drive);
    bool remove(Drive drive);
    Drive find(double price);
    Drive find(int rating);
    std::list<Drive> getAll();
    string showInfo();
    ~DrivesRepository();


};


#endif //OOPPROJECT_DRIVESREPOSITORY_H
