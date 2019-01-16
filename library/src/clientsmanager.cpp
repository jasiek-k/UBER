//
// Created by Mateusz on 28.12.2018.
//

#include <clientexception.h>
#include "clientsmanager.h"

ClientsManager::ClientsManager() {}

bool ClientsManager::addClient(Client_ptr client) {
    if (clientsRepository.find(client->getName()) != nullptr) {
        throw ClientException();
    }
    return ClientsManager::clientsRepository.add(client);
}

bool ClientsManager::removerClient(Client_ptr client) {
    if (clientsRepository.find(client->getName()) == nullptr) {
        throw ClientException();
    }
    return ClientsManager::clientsRepository.remove(client);
}

list<Client_ptr> ClientsManager::getAllClients() { return ClientsManager::clientsRepository.getAll(); }

Client_ptr ClientsManager::find(string name) {

    Client_ptr client = clientsRepository.find(name);
    if (client == nullptr) {
        throw ClientException();
    }
    return client;
}

string ClientsManager::showClientsInfo() { return ClientsManager::clientsRepository.showInfo(); }

ClientsManager::~ClientsManager() {}