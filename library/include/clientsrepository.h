//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_CLIENTREPOSITORY_H
#define OOPPROJECT_CLIENTREPOSITORY_H


#include "Client.h"
#include "repository.h"

class ClientsRepository: public Repository<Client> {

public:
    ClientsRepository();
    void add(Client client);
    bool remove(Client client);
    Client find(string name);
    std::list<Client> getAll();
    string showInfo();
    ~ClientsRepository();


};


#endif //OOPPROJECT_CLIENTREPOSITORY_H
