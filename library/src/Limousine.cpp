//
// Created by pobi on 26.12.18.
//

#include "Limousine.h"

double Limousine::extraCost()
{

}

int Limousine::getExtravagance()
{
    return extravagance;
}

double Limousine::getPrice()
{

}
Limousine::Limousine(int seat, int extra, string nr):Vehicle(seat,nr)
{
    this->extravagance=extra;
}