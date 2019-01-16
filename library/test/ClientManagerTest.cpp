#include <boost/test/unit_test.hpp>
#include <Client.h>
#include <Limousine.h>
#include <Transporter.h>
#include <Vehicle.h>
#include <Drive.h>
#include <clientsmanager.h>
#include <Driver.h>
#include "clientexception.h"
#include "driversmanager.h"
#include "driverexception.h"
#include "drivesmanager.h"
#include "driveexception.h"


BOOST_AUTO_TEST_SUITE(ClientSuite)

BOOST_AUTO_TEST_CASE(ClientManagerTesting)
        {
               Client_ptr client1(new Client("Mati"));
               Client_ptr client2(new Client("Jaś"));
               Client_ptr client3(new Client("Damiano"));
               Client_ptr client4(new Client("Cham"));

                auto *clients = new ClientsManager();


                BOOST_REQUIRE_EQUAL(true,true);
                BOOST_REQUIRE_EQUAL(clients->addClient(client1),true);
                BOOST_REQUIRE_EQUAL(clients->addClient(client2),true);
                BOOST_REQUIRE_EQUAL(clients->addClient(client3),true);
                BOOST_REQUIRE_EQUAL(clients->addClient(client4),true);
                BOOST_CHECK_THROW(clients->addClient(client1),ClientException);
                BOOST_CHECK_THROW(clients->addClient(client3),ClientException);
                BOOST_REQUIRE_EQUAL(clients->removerClient(client1),true);
                BOOST_CHECK_THROW(clients->removerClient(client1),ClientException);
                BOOST_REQUIRE_EQUAL(clients->find("Damiano"),client3);
                BOOST_CHECK_THROW(clients->find("Mati"),ClientException);
                list<Client_ptr> clientsList;
                clientsList.push_back(client2);
                clientsList.push_back(client3);
                clientsList.push_back(client4);
                BOOST_CHECK_EQUAL(clients->getAllClients().size(),clientsList.size());

        }
        BOOST_AUTO_TEST_CASE(DriversManagerTesting)
        {


            Vehicle_ptr vehicle1(new Limousine(4,200,"VK23455"));
            Vehicle_ptr vehicle2(new Transporter(4,100,"JP4270"));
            Vehicle_ptr vehicle3(new Transporter(4,120,"JP4220"));
            Vehicle_ptr vehicle4(new Transporter(5,140,"JP4290"));

                auto *drivers = new DriversManager();

                Driver_ptr driver0(new Driver("Jas",vehicle1));
                Driver_ptr driver1(new Driver("Cieciu",vehicle2));
                Driver_ptr driver2(new Driver("Precel",vehicle3));
                Driver_ptr driver3(new Driver("Adaś",vehicle4));
                BOOST_REQUIRE_EQUAL(true,true);
                BOOST_REQUIRE_EQUAL(drivers->addDriver(driver0),true);
                BOOST_REQUIRE_EQUAL(drivers->addDriver(driver1),true);
                BOOST_REQUIRE_EQUAL(drivers->addDriver(driver2),true);
                BOOST_REQUIRE_EQUAL(drivers->addDriver(driver3),true);
                BOOST_CHECK_THROW(drivers->addDriver(driver2),DriverException);
                BOOST_CHECK_THROW(drivers->addDriver(driver3),DriverException);
                BOOST_REQUIRE_EQUAL(drivers->removerDriver(driver3),true);
                BOOST_CHECK_THROW(drivers->removerDriver(driver3),DriverException);
                BOOST_REQUIRE_EQUAL(drivers->find("Cieciu"),driver1);
                BOOST_CHECK_THROW(drivers->find("Adas"),DriverException);
                list<Driver_ptr> driversList;
                driversList.push_back(driver0);
                driversList.push_back(driver1);
                driversList.push_back(driver2);
                BOOST_REQUIRE_EQUAL(drivers->getAllDrivers().size(),driversList.size());



        }
 BOOST_AUTO_TEST_CASE(DrivesManagerTesting)
        {


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
            auto *drives = new DrivesManager();

            clients->addClient(client1);
            clients->addClient(client2);
            clients->addClient(client3);
            clients->addClient(client4);

            drivers->addDriver(driver0);
            drivers->addDriver(driver1);
            drivers->addDriver(driver2);
            drivers->addDriver(driver3);

            BOOST_CHECK_EQUAL(drives->addDrive(client1,driver0),true);
            BOOST_CHECK_EQUAL(drives->addDrive(client2,driver1),true);
            BOOST_CHECK_EQUAL(drives->addDrive(client3,driver2),true);
            BOOST_CHECK_EQUAL(drives->addDrive(client4,driver3),true);
            BOOST_CHECK_THROW(drives->addDrive(client4,driver3),DriveException);
            BOOST_CHECK_THROW(drives->addDrive(client2,driver3),DriveException);
            BOOST_CHECK_THROW(drives->addDrive(client2,nullptr),DriveException);


        }





BOOST_AUTO_TEST_SUITE_END()