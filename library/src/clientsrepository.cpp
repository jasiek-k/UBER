//
// Created by Mateusz on 28.12.2018.
//

#include "clientsrepository.h"

ClientsRepository::ClientsRepository() {}

void ClientsRepository::add(Client client) { Repository::lista.push_back(client); }

bool ClientsRepository::remove(Client client) { Repository::lista.remove(client); }

std::list<Client> ClientsRepository::getAll() {
    list<Client> temp;
    for (Client client: Repository::lista) {
        temp.push_back(client);
    }
    return lista;
}

Client ClientsRepository::find(string name) {
    for (Client client: Repository::lista) {
        if (client.getName() == name) {
            return client;
        }
    }
}


string ClientsRepository::showInfo() {
    return " clientsinfo";
}

ClientsRepository::~ClientsRepository() {}

