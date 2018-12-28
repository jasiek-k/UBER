//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_ADDRESS_H
#define OOPPROJECT_ADDRESS_H

#include <memory>
#include <iostream>
using namespace std;

class Address {
private:
    string street;
public:
    string getAddress();
    void setAddress(string);
    Address(string);
};
typedef shared_ptr <Address> Address_ptr;

#endif //OOPPROJECT_ADDRESS_H
