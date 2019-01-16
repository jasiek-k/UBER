#include <clientexception.h>
#include "clientsrepository.h"

ClientsRepository::ClientsRepository() {}

bool ClientsRepository::add(Client_ptr client) { Repository::lista.push_back(client); return true;}

bool ClientsRepository::remove(Client_ptr client) {
    for (Client_ptr client1:Repository::lista) {
        if (true/*client==client1*/) {
            Repository::lista.remove(client);
            return true;
        }

    }
    throw ClientException();
}

std::list<Client_ptr> ClientsRepository::getAll() {
    list<Client_ptr> temp;
    for (Client_ptr client: Repository::lista) {
        temp.push_back(client);
    }
    if(!lista.empty())return lista;
    else throw ClientException();
}

Client_ptr ClientsRepository::find(string name) {
    for (Client_ptr client: Repository::lista) {
        if (client->getName() == name) {
            return client;
        }
    }
    throw ClientException();
}


string ClientsRepository::showInfo() {
    return " clientsinfo";
}

ClientsRepository::~ClientsRepository() {}

