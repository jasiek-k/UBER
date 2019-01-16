#include <clientexception.h>
#include "clientsrepository.h"

ClientsRepository::ClientsRepository() {}

bool ClientsRepository::add(Client_ptr client) {
    Repository::lista.push_back(client);
    return true;
}

bool ClientsRepository::remove(Client_ptr client) {
    for (Client_ptr client1:Repository::lista) {
        if (client->getName()==client1->getName()) {
            Repository::lista.remove(client);
            return true;
        }
    }
    return false;
}

std::list<Client_ptr> ClientsRepository::getAll() {
    list<Client_ptr> temp;
    for (Client_ptr client: Repository::lista) {
        temp.push_back(client);
    }
    return lista;
}

Client_ptr ClientsRepository::find(string name) {
    for (Client_ptr client: Repository::lista) {
        if (client->getName() == name) {
            return client;
        }
    }
return nullptr;
}


string ClientsRepository::showInfo() {
    string temp="";
    for (Client_ptr client: Repository::lista) {
       temp +=client->clientInfo() + "\n";
    }
    return " Clientsinfo:\n" + temp;
}

ClientsRepository::~ClientsRepository() {}

