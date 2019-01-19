#ifndef OOPPROJECT_CLIENTMANAGER_H
#define OOPPROJECT_CLIENTMANAGER_H


#include "clientsrepository.h"
#include <memory>
class ClientsManager {
private:
    CL_ptr clientsRepository;
public:
    ClientsManager();
    bool addClient(Client_ptr client);
    bool removerClient(Client_ptr client);
    Client_ptr find(string name);
    list<Client_ptr>getAllClients();
    string showClientsInfo();
    ~ClientsManager();

};
typedef shared_ptr<ClientsManager>CLM_ptr;


#endif //OOPPROJECT_CLIENTMANAGER_H
