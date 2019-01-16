//
// Created by pobi on 26.12.18.
//

#include "Drive.h"
#include "Client.h"
#include "Driver.h"
#include <memory>
#include <sstream>
#include <iostream>
#include <Drive.h>


typedef shared_ptr<Driver>Driver_ptr;
typedef shared_ptr<Client>Client_ptr;
using namespace std;

Drive::Drive(Driver_ptr dr, Client_ptr cl){
    this->beginDate=boost::posix_time::second_clock::local_time();
    //this->endDate=nullptr;
    this->driver=dr;
    this->client=cl;
    this->price=5; //stała wartość początkowa za rozpoczęcie kursu, zwiększana o kurs za przejazd
}

float Drive::conductPrice(){
    /*
    ///TUTAJ NIE KMINIE JAKI DAC WARUNEK SPRAWDZENIA CZY KURS SIE SKONCZYL
    if(endDate) {
        return price=(price+(endDate-boost::posix_time::second_clock::local_time()).minutes())*client->discount();
    }
    if (endDate) {
        this->price=(price+(endDate-beginDate).minutes())*client->discount();
        return price;
    */
}

void Drive::finishRide() {
    this->endDate=boost::posix_time::second_clock::local_time();
}

string Drive::driveInfo()
{
    stringstream tmp;
    tmp << conductPrice();
    return "Drive Info - Driver: " + driver->DriverInfo() + " - Client: " + client->clientInfo() + " - Price: " + tmp.str();
}

Client_ptr Drive::getClient() {
    return this->client;
}

Driver_ptr Drive::getDriver() {
    return this->driver;
}
