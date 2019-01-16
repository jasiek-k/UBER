cmake_minimum_required(VERSION 3.4)
project(Library)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/Drive.cpp
        include/Drive.h
        src/Driver.cpp
        include/Driver.h
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
        include/PremiumClient.h src/exception.cpp include/exception.h src/clientexception.cpp include/clientexception.h src/driveexception.cpp include/driveexception.h src/driverexception.cpp include/driverexception.h src/repository.cpp include/repository.h src/drivesrepository.cpp include/drivesrepository.h src/clientsrepository.cpp include/clientsrepository.h src/driversrepository.cpp include/driversrepository.h src/driversmanager.cpp include/driversmanager.h src/drivesmanager.cpp include/drivesmanager.h src/clientsmanager.cpp include/clientsmanager.h)

add_library(Library ${SOURCE_FILES})

#add 'include' directory with header files from 'Library' project to paths
target_include_directories(Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#Unit Tests section
# Check if generating Visual Studio 14 2015 project
if(MSVC)
    if(NOT BOOST_ROOT)
        set(BOOST_ROOT "C:/local/boost_1_60_0")
    endif()
    set(Boost_INCLUDE_DIR "${BOOST_ROOT}")
    set(Boost_LIBRARY_DIR "${BOOST_ROOT}/lib32-msvc-14.0")
    set(Boost_USE_STATIC_LIBS ON)
    set(Boost_USE_MULTITHREADED ON)

    if(NOT EXISTS ${Boost_LIBRARY_DIR})
        message(WARNING "Boost library requires manual installation in Windows")
        message("1) Browse: https://sourceforge.net/projects/boost/files/boost-binaries/1.60.0/")
        message("2) Download: boost_1_60_0-msvc-14.0-32.exe")
        message("3) Install into default directory: C:\\local")
        message("")
        message(FATAL_ERROR "Boost libraries not found at ${Boost_LIBRARY_DIR}")
    endif()

    find_package(Boost COMPONENTS unit_test_framework REQUIRED)

    include_directories(${Boost_INCLUDE_DIR})
    link_directories(${Boost_LIBRARY_DIR})

else()
    find_package(Boost COMPONENTS unit_test_framework REQUIRED)
endif()

set(SOURCE_TEST_FILES
        test/master.cpp
        test/ClientManagerTest.cpp
        )

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

add_executable (Test ${SOURCE_TEST_FILES})

target_link_libraries (Test
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

enable_testing()
add_test(LibraryTest Test)
