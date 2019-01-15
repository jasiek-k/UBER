//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_CLIENT_H
#define OOPPROJECT_CLIENT_H

#include <iostream>
#include "ClientType.h"
#include <memory>

using namespace std;

class Client {
private:
    string name;
    ClientType_ptr clientType;
public:
    Client(string);
    string clientInfo();
    float discount();
    string getName();
    void changeClientType(string);

};
typedef shared_ptr<Client>Client_ptr;

#endif //OOPPROJECT_CLIENT_H
