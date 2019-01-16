//
// Created by pobi on 26.12.18.
//

#ifndef OOPPROJECT_CLIENTTYPE_H
#define OOPPROJECT_CLIENTTYPE_H

#include <memory>
using namespace std;

class ClientType {
protected:
    float factor;
public:
    ClientType();
    virtual float getFactor()=0;
    ~ClientType()=default;
};
typedef shared_ptr<ClientType>ClientType_ptr;

#endif //OOPPROJECT_CLIENTTYPE_H
