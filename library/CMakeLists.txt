cmake_minimum_required(VERSION 3.4)
project(Library)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/Drive.cpp
        include/Drive.h
        src/Driver.cpp
        include/Driver.h
        src/Address.cpp
        include/Address.h
        src/Client.cpp
        include/Client.h
        src/Vehicle.cpp
        include/Vehicle.h
        src/DailyCars.cpp
        include/DailyCars.h
        src/Limousine.cpp
        include/Limousine.h
        src/Transporter.cpp
        include/Transporter.h
        src/ClientType.cpp
        include/ClientType.h
        src/BaseClient.cpp
        include/BaseClient.h
        src/GoldClient.cpp
        include/GoldClient.h
        src/PremiumClient.cpp
        include/PremiumClient.h src/exception.cpp include/exception.h src/clientexception.cpp include/clientexception.h src/driveexception.cpp include/driveexception.h src/driverexception.cpp include/driverexception.h src/repository.cpp include/repository.h src/drivesrepository.cpp include/drivesrepository.h src/clientsrepository.cpp include/clientsrepository.h include/driversrepository.cpp include/driversrepository.h)

add_library(Library ${SOURCE_FILES})

#add 'include' directory with header files from 'Library' project to paths
target_include_directories(Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#Unit Tests section

