//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_GOLDCLIENT_H
#define OOPPROJECT_GOLDCLIENT_H

#include "ClientType.h"

class GoldClient:public ClientType {
public:
    GoldClient();
    virtual float getFactor();
};
typedef shared_ptr<GoldClient>GClient_ptr;


#endif //OOPPROJECT_GOLDCLIENT_H
