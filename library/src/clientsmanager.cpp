//
// Created by Mateusz on 28.12.2018.
//

#include "clientsmanager.h"
ClientsManager::ClientsManager() {}
bool ClientsManager::addClient(Client client) {return ClientsManager::clientsRepository.add(client);}
bool ClientsManager::removerClient(Client client) {return ClientsManager::clientsRepository.remove(client);}
list<Client> ClientsManager::getAllClients() {return ClientsManager::clientsRepository.getAll();}
Client ClientsManager::find(string name) {return ClientsManager::clientsRepository.find(name);}
string ClientsManager::showClientsInfo() {return ClientsManager::clientsRepository.showInfo();}
ClientsManager::~ClientsManager() {}