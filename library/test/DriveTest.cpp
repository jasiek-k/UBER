//
// Created by pobi on 17.01.19.
//

#include <boost/test/unit_test.hpp>
#include <Client.h>
#include <Limousine.h>
#include <Transporter.h>
#include <DailyCars.h>
#include <Vehicle.h>
#include <Drive.h>
#include <clientsmanager.h>
#include <Driver.h>
#include <chrono>
#include <thread>

BOOST_AUTO_TEST_SUITE(DriveSuite)

    BOOST_AUTO_TEST_CASE(Client_PriceTesting) {
        Client_ptr client1(new Client("Mati"));
        Vehicle_ptr vehicle1(new Limousine(4, 2, "VK23455"));
        Driver_ptr driver1(new Driver("Jas", vehicle1));
        Drive_ptr drive1(new Drive(driver1, client1));

        Client_ptr client2(new Client("Damiano"));
        client2->changeClientType("gold");
        Vehicle_ptr vehicle2(new Limousine(4, 2, "WZ42055"));
        Driver_ptr driver2(new Driver("Michal", vehicle2));
        Drive_ptr drive2(new Drive(driver2, client2));

        BOOST_REQUIRE_EQUAL(drive1->conductPrice(), 9);
        BOOST_CHECK_CLOSE(drive2->conductPrice(), 7.2, 1e-2);
        this_thread::sleep_for(chrono::milliseconds(120000));
        BOOST_REQUIRE_EQUAL(drive1->conductPrice(), 17);
        BOOST_CHECK_CLOSE(drive2->conductPrice(), 13.6, 1e-2);
    }

    BOOST_AUTO_TEST_CASE(Vehicle_PriceTesting) {
        Client_ptr client1(new Client("Mati"));
        Vehicle_ptr vehicle1(new Transporter(4, 1600, "JA4220"));
        Driver_ptr driver1(new Driver("Cieciu", vehicle1));
        Drive_ptr drive1(new Drive(driver1, client1));
        drive1->finishRide();
        Client_ptr client2(new Client("Mati2"));
        Vehicle_ptr vehicle2(new DailyCars(4, "WK4220"));
        Driver_ptr driver2(new Driver("Damian", vehicle2));
        Drive_ptr drive2(new Drive(driver2, client2));
        drive2->finishRide();
        Client_ptr client3(new Client("Mati3"));
        Vehicle_ptr vehicle3(new Limousine(4, 3, "RKS420"));
        Driver_ptr driver3(new Driver("Kacper", vehicle3));
        Drive_ptr drive3(new Drive(driver3, client3));
        drive3->finishRide();
        BOOST_REQUIRE_EQUAL(drive1->conductPrice(), 8.5);
        BOOST_REQUIRE_EQUAL(drive2->conductPrice(), 7);
        BOOST_REQUIRE_EQUAL(drive3->conductPrice(), 10);
    }

BOOST_AUTO_TEST_SUITE_END()