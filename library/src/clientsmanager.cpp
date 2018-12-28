//
// Created by Mateusz on 28.12.2018.
//

#include "clientsmanager.h"
ClientsManager::ClientsManager() {}
void ClientsManager::addClient(Client client) {ClientsManager::clientsRepository.add(client);}
bool ClientsManager::removerClient(Client client) {ClientsManager::clientsRepository.remove(client);}
list<Client> ClientsManager::getAllClients() {ClientsManager::clientsRepository.getAll();}
Client ClientsManager::find(string name) {ClientsManager::clientsRepository.find(name);}
string ClientsManager::showClientsInfo() {ClientsManager::clientsRepository.showInfo();}
ClientsManager::~ClientsManager() {}