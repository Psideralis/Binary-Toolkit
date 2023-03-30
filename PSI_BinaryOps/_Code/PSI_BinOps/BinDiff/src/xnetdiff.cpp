/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: xnetdiff.cpp
Description:

********************************************* */

#include "PSI_ProgrammingUtilities.hpp"

#define WINDOWS

int main(int argc, char const *argv[]){
#ifdef WINDOWS
    PSI_Winpipe("netstat -aonq","output.txt");
#endif
#ifndef WINDOWS
    PSI_pipe("ss -ap","output.txt");
#endif
    return 0;
}