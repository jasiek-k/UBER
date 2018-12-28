//
// Created by pobi on 26.12.18.
//

#include "Address.h"

string Address::getAddress()
{
    return street;
}

Address::Address(string ad)
{
    this->street=ad;
}

void Address::setAddress(string add)
{
    this->street=add;
}
