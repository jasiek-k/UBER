//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_BASECLIENT_H
#define OOPPROJECT_BASECLIENT_H

#include <memory>
#include "ClientType.h"

class BaseClient: public ClientType {
public:
    BaseClient();
    virtual float getFactor();
    ~BaseClient()=default;
};
typedef shared_ptr<BaseClient>BClient_ptr;

#endif //OOPPROJECT_BASECLIENT_H
