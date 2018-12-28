//
// Created by pobi on 26.12.18.
//

#include "Transporter.h"

Transporter::Transporter(int seat, int ld, string nr):Vehicle(seat,nr)
{
    this->load=ld;
}

int Transporter::getLoad()
{
    return load;
}