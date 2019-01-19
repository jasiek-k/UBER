//
// Created by Mateusz on 28.12.2018.
//

#include <clientexception.h>
#include "clientsmanager.h"

ClientsManager::ClientsManager() {
    this->clientsRepository = CL_ptr(new ClientsRepository());
}

bool ClientsManager::addClient(Client_ptr client) {
    try {
        Client_ptr clt = find(client->getName());
    }
    catch(ClientException)
    {
        clientsRepository->add(client);
        return true;
    }
    throw ClientException();
}

bool ClientsManager::removerClient(Client_ptr client) {
    try {
        Client_ptr clt = find(client->getName());
        clientsRepository->remove(client);
        return true;

    }
    catch(ClientException)
    {
    }
    throw ClientException();
}

list<Client_ptr> ClientsManager::getAllClients() { return ClientsManager::clientsRepository->getAll(); }

Client_ptr ClientsManager::find(string name) {

    list<Client_ptr> listka= getAllClients();


    if(listka.empty())
    {
        throw ClientException();
    }
    for (Client_ptr client: listka) {
        if (client->getName() == name) {
            return client;
        }
    }

    throw ClientException();
}

string ClientsManager::showClientsInfo() {

    list<Client_ptr> listka= getAllClients();
    string temp="";
    for (Client_ptr client: listka) {
        temp +=client->clientInfo() + "\n";
    }
    return " Clientsinfo:\n" + temp;
}

ClientsManager::~ClientsManager() {}