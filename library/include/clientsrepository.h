//
// Created by Mateusz on 28.12.2018.
//

#ifndef OOPPROJECT_CLIENTREPOSITORY_H
#define OOPPROJECT_CLIENTREPOSITORY_H


#include "Client.h"
#include "repository.h"


class ClientsRepository: public Repository<Client_ptr> {

public:
    ClientsRepository();
    bool add(Client_ptr client);
    bool remove(Client_ptr client);
    Client_ptr find(string name);
    std::list<Client_ptr> getAll();
    string showInfo();
    ~ClientsRepository();


};


#endif //OOPPROJECT_CLIENTREPOSITORY_H
