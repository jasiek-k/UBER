//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_PREMIUMCLIENT_H
#define OOPPROJECT_PREMIUMCLIENT_H

#include <memory>
#include "ClientType.h"

class PremiumClient:public ClientType {
public:
    PremiumClient();
    virtual float getFactor();
    ~PremiumClient()= default;
};
typedef shared_ptr<PremiumClient>PClient_ptr;


#endif //OOPPROJECT_PREMIUMCLIENT_H
