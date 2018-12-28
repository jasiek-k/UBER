//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_CLIENT_H
#define OOPPROJECT_CLIENT_H

#include <iostream>
#include "Address.h"
#include "ClientType.h"


using namespace std;

class Client {
private:
    string name;
    string surname;
    Address_ptr address;
    ClientType_ptr clientType;
public:
    Client(string,string,Address_ptr);
    string clientInfo();
    virtual float discount()=0;
    string getName();
    string getSurname();
    Address_ptr getAddress();
    void setAddress(string);
    void changeClientType(string);

};


#endif //OOPPROJECT_CLIENT_H
