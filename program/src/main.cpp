#include <iostream>
#include <Client.h>
#include <clientsmanager.h>
#include <Driver.h>
#include <Transporter.h>
#include <Limousine.h>
#include <driversmanager.h>
#include <drivesmanager.h>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    Client_ptr client1(new Client("Mati"));
    Client_ptr client2(new Client("Jaś"));
    Client_ptr client3(new Client("Damiano"));
    Client_ptr client4(new Client("Olga"));

    Vehicle_ptr vehicle1(new Limousine(4, 2, "VK23455"));
    Vehicle_ptr vehicle2(new Transporter(4, 100, "JA4270"));
    Vehicle_ptr vehicle3(new Transporter(4, 120, "JA4220"));
    Vehicle_ptr vehicle4(new Transporter(5, 140, "JA4290"));

    Driver_ptr driver0(new Driver("Jas", vehicle1));
    Driver_ptr driver1(new Driver("Cieciu", vehicle2));
    Driver_ptr driver2(new Driver("Precel", vehicle3));
    Driver_ptr driver3(new Driver("Adaś", vehicle4));

 //   auto *clients = new ClientsManager();
    CLM_ptr clients(new ClientsManager());

    // auto *drivers = new DriversManager();
    DRM_ptr drivers(new DriversManager());


    clients->addClient(client1);
    clients->addClient(client2);
    clients->addClient(client3);
    clients->addClient(client4);

    drivers->addDriver(driver0);
    drivers->addDriver(driver1);
    drivers->addDriver(driver2);
    drivers->addDriver(driver3);

    cout << clients->showClientsInfo() << endl;
    cout << drivers->showDriversInfo() << endl;


   // auto *drives = new DrivesManager();
    DRsM_ptr drives(new DrivesManager());

    drives->addDrive(client1, driver0);
    drives->addDrive(client2, driver1);
    drives->addDrive(client3, driver2);
    drives->addDrive(client4, driver3);

    cout<<"Drives underway"<<endl;
    this_thread::sleep_for(chrono::milliseconds(120000));
    drives->endOfDrive(client1);
    cout<<"Price for 1st client: "<<drives->getPriceForFinishedRide(client1)<<endl;
    cout<<"X"<<endl;
    this_thread::sleep_for(chrono::milliseconds(80000));
    drives->endOfDrive(client2);
    cout<<"Price for 2nd client: "<<drives->getPriceForFinishedRide(client2)<<endl;

    drives->showDrivesInfo();


  //  delete clients;
   // delete drivers;
   // delete drives;
    return 0;
}