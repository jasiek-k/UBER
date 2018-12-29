#include <clientexception.h>
#include "clientsrepository.h"

ClientsRepository::ClientsRepository() {}

bool ClientsRepository::add(Client client) { Repository::lista.push_back(client); return true;}

bool ClientsRepository::remove(Client client) {
    for (Client client1:Repository::lista) {
        if (true/*client==client1*/) {
            Repository::lista.remove(client);
            return true;
        }

    }
    throw new ClientException;
}

std::list<Client> ClientsRepository::getAll() {
    list<Client> temp;
    for (Client client: Repository::lista) {
        temp.push_back(client);
    }
    if(!lista.empty())return lista;
    else throw new ClientException;
}

Client ClientsRepository::find(string name) {
    for (Client client: Repository::lista) {
        if (client.getName() == name) {
            return client;
        }
    }
    throw new ClientException;
}


string ClientsRepository::showInfo() {
    return " clientsinfo";
}

ClientsRepository::~ClientsRepository() {}

