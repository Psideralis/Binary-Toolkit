/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: xprocdiff.cpp
Description:

********************************************* */

#include "PSI_ProgrammingUtilities.hpp"
#include <ctime>
#include <iostream>

using namespace std;

#define WINDOWS


char* getDateTime(){
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}

void runPipes(){
#ifdef WINDOWS
    PSI_Winpipe("tasklist","output.txt");
#endif
#ifndef WINDOWS
    PSI_pipe("ps","output.txt");
#endif  
}

void procPipes(){


}

int main(int argc, char const *argv[]){


    return 0;
}