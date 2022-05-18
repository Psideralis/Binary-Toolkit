/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: binfscntrl.h
Description:  Provides options for fylesystem
control as permission assigment, filesystem
monitor reporting, format file blocking,
dynamic rearchive and filtering.

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