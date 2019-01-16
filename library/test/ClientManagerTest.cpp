#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(ClientSuite)

BOOST_AUTO_TEST_CASE(ClientManagerAdding)
        {
               Client_ptr client1(new Client("Mati"));
               Client_ptr client2(new Client("Jaś"));
               Client_ptr client3(new Client("Damiano"));
               Client_ptr client4(new Client("Cham"));


               ClientManager *clients = new ClientManager();

               Driver_ptr driver1(new Driver("Cieciu"));
               Driver_ptr driver2(new Driver("Precel"));
               Driver_ptr driver3(new Driver("Adaś"));

               Vehicle_ptr vehicle1(new Limousine(4,200,"VK23455"));
               Vehicle_ptr vehicle2(new Transporter(4,100,"JP4200"));



                BOOST_REQUIRE_EQUAL();
                BOOST_REQUIRE_EQUAL();

        }

BOOST_AUTO_TEST_CASE(ClientRentCase)
        {
                Address_ptr add(new Address("Rojna","420"));
                Address_ptr add2(new Address("Piotrkowska","112"));
                Client_ptr client(new Client("Marek","Mostowiak","990934243",add,add2));
                Vehicle_ptr cptr (new Car('E',"EZG137",100,6300));
                Vehicle_ptr cptr2 (new Moped('D',"EL4204",160,3000));
                Rent_ptr one(new Rent(cptr,client));
                Rent_ptr two(new Rent(cptr2,client));
                client->addRent(one);
                client->addRent(two);
                BOOST_REQUIRE_EQUAL(client->getNrVehicles(),2);
        }

BOOST_AUTO_TEST_SUITE_END()