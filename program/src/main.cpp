#include <iostream>
#include <Client.h>
#include <clientsmanager.h>
#include <Driver.h>
#include <Transporter.h>
#include <Limousine.h>
#include <driversmanager.h>

using namespace std;

int main() {
    Client_ptr client1(new Client("Mati"));
    Client_ptr client2(new Client("Jaś"));
    Client_ptr client3(new Client("Damiano"));
    Client_ptr client4(new Client("Cham"));


    Vehicle_ptr vehicle1(new Limousine(4,200,"VK23455"));
    Vehicle_ptr vehicle2(new Transporter(4,100,"JP4270"));
    Vehicle_ptr vehicle3(new Transporter(4,120,"JP4220"));
    Vehicle_ptr vehicle4(new Transporter(5,140,"JP4290"));

    Driver_ptr driver0(new Driver("Jas",vehicle1));
    Driver_ptr driver1(new Driver("Cieciu",vehicle2));
    Driver_ptr driver2(new Driver("Precel",vehicle3));
    Driver_ptr driver3(new Driver("Adaś",vehicle4));



    auto *clients = new ClientsManager();
    auto *drivers = new DriversManager();

    clients->addClient(client1);
    clients->addClient(client2);
    clients->addClient(client3);
    clients->addClient(client4);

    drivers->addDriver(driver0);
    drivers->addDriver(driver1);
    drivers->addDriver(driver2);
    drivers->addDriver(driver3);

    cout<<clients->showClientsInfo()<<endl;
    cout<<drivers->showDriversInfo()<<endl;

    return 0;
}