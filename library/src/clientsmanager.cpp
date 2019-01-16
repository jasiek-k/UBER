//
// Created by Mateusz on 28.12.2018.
//

#include "clientsmanager.h"
ClientsManager::ClientsManager() {}
bool ClientsManager::addClient(Client_ptr client) {return ClientsManager::clientsRepository.add(client);}
bool ClientsManager::removerClient(Client_ptr client) {return ClientsManager::clientsRepository.remove(client);}
list<Client_ptr> ClientsManager::getAllClients() {return ClientsManager::clientsRepository.getAll();}
Client_ptr ClientsManager::find(string name) {return ClientsManager::clientsRepository.find(name);}
string ClientsManager::showClientsInfo() {return ClientsManager::clientsRepository.showInfo();}
ClientsManager::~ClientsManager() {}