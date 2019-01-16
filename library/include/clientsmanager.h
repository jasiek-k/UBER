#ifndef OOPPROJECT_CLIENTMANAGER_H
#define OOPPROJECT_CLIENTMANAGER_H


#include "clientsrepository.h"

class ClientsManager {
private:
    ClientsRepository clientsRepository;
public:
    ClientsManager();
    bool addClient(Client_ptr client);
    bool removerClient(Client_ptr client);
    Client_ptr find(string name);
    list<Client_ptr>getAllClients();
    string showClientsInfo();
    ~ClientsManager();

};


#endif //OOPPROJECT_CLIENTMANAGER_H
