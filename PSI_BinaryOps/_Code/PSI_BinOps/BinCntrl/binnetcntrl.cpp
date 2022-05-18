/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: binnetcntrl.h
Description: Provides options for network control
as block ips, routing, filtering, dynamic 
assignment, content blocking and network monitor
reporting.

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