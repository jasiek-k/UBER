cmake_minimum_required(VERSION 3.4)

project(Program)

#specify set of project's source files
set(SOURCE_FILES
        src/main.cpp
        ../library/src/exception.cpp ../library/include/exception.h ../library/src/clientexception.cpp ../library/include/clientexception.h ../library/src/driveexception.cpp ../library/include/driveexception.h ../library/src/driverexception.cpp ../library/include/driverexception.h ../library/src/repository.cpp ../library/include/repository.h ../library/src/drivesrepository.cpp ../library/include/drivesrepository.h ../library/src/clientsrepository.cpp ../library/include/clientsrepository.h ../library/include/driversrepository.cpp ../library/include/driversrepository.h)
#add following files to executable file 'Program'
add_executable(Program ${SOURCE_FILES})

#add libraries from 'Library' project
target_link_libraries(Program Library)

#add header files from 'include' directory of main project
target_include_directories(Program PUBLIC include)
