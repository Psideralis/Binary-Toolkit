/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: binnetdiff.h
Description: Create a backup of the network
and if exist create a difference file. It checks
the network ports, ips, devices and services.

    -b : only creates backup and hash
    -c : compare previews backup and creates 
        diff file

********************************************* */ 

#include <fstream>
#include <iostream>
using namespace std;

#define WINDOWS

int main(int argc, char const *argv[])
{
    std::fstream registry;
    registry.open("./NETBackupDiff.txt", ios::out);
    #ifdef MACOS

    #endif
    #ifdef LINUX

    #endif
    #ifdef WINDOWS

    #endif
    registry.close();
    /* code */
    return 0;
}
