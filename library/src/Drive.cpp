#include "Drive.h"
#include "Client.h"
#include "Driver.h"
#include <memory>
#include <sstream>
#include <iostream>
#include <Drive.h>
#include <driveexception.h>


typedef shared_ptr<Driver> Driver_ptr;
typedef shared_ptr<Client> Client_ptr;
using namespace std;

Drive::Drive(Driver_ptr dr, Client_ptr cl) {
    this->beginDate = boost::posix_time::second_clock::local_time();
    //this->endDate=nullptr;
    if ((dr == nullptr) || (cl == nullptr)) {
        throw DriveException();
    }
    this->driver = dr;
    this->client = cl;
    this->price = 5; //stała wartość początkowa za rozpoczęcie kursu, zwiększana o kurs za przejazd
    this->ifFinished = false;//flaga sygnalizująca czy kurs został zakończony
}

float Drive::conductPrice() {

    if (!ifFinished) {
        return 1.00*(price+((boost::posix_time::second_clock::local_time()-beginDate).minutes()+1)*driver->getVehiclePrice())*client->discount();
    }
    if (ifFinished) {
        this->price=(price+((endDate-beginDate).minutes()+1)*driver->getVehiclePrice())*client->discount();
        return 1.00* price;
    }
}

string Drive::driveInfo() {
    stringstream tmp;
    if(ifFinished) {
        tmp << price;
        return "Drive Info - Driver: " + driver->driverInfo() + " - Client: " + client->clientInfo() + " - Status: finished - Price: " + tmp.str();
    }
    if(!ifFinished) {
        tmp << conductPrice();
        return "Drive Info - Driver: " + driver->driverInfo() + " - Client: " + client->clientInfo() + " - Status: ongoing - Price: " + tmp.str();
    }
}

Client_ptr Drive::getClient() {
    return this->client;
}

Driver_ptr Drive::getDriver() {
    return this->driver;
}

void Drive::finishRide() {
    this->endDate = boost::posix_time::second_clock::local_time();
    this->ifFinished = true;
}

bool Drive::isIfFinished() {
    return this->ifFinished;
}
