//
// Created by pobi on 26.12.18.
//

#include "BaseClient.h"
#include "GoldClient.h"
#include "PremiumClient.h"
#include "Client.h"

void Client::changeClientType(string type)
{
    if(type.compare("base")==0 or type.compare("BASE")==0)
        {
            clientType=ClientType_ptr(new BaseClient());
        }
    else if(type.compare("gold")==0 or type.compare("GOLD")==0)
        {
            clientType=ClientType_ptr(new GoldClient());
        }
    else if(type.compare("premium")==0 or type.compare("PREMIUM")==0)
        {
            clientType=ClientType_ptr(new PremiumClient());
        }
}

string Client::clientInfo()
{
    return "Name: " + name;
}

Client::Client(string n)
{
    this->name=n;
    this->clientType=ClientType_ptr(new BaseClient());
}

string Client::getName()
{
    return name;
}

float Client::discount(){
    return clientType->getFactor();
}
