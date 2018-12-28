#ifndef OOPPROJECT_CLIENTMANAGER_H
#define OOPPROJECT_CLIENTMANAGER_H


#include "clientsrepository.h"

class ClientsManager {
private:
    ClientsRepository clientsRepository;
public:
    ClientsManager();
    void addClient(Client client);
    bool removerClient(Client client);
    Client find(string name);
    list<Client>getAllClients();
    string showClientsInfo();
    ~ClientsManager();

};


#endif //OOPPROJECT_CLIENTMANAGER_H
