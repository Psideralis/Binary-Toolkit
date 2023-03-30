/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: xorgdiff.cpp
Description:

********************************************* */

#include "PSI_ProgrammingUtilities.hpp"

#define WINDOWS

int main(int argc, char const *argv[]){
#ifdef WINDOWS
    PSI_Winpipe("net users","output.txt");
    PSI_Winpipe("net localgroup","output.txt");
#endif
#ifndef WINDOWS
    PSI_pipe("cat /etc/passwd","output.txt");
#endif
    return 0;
}