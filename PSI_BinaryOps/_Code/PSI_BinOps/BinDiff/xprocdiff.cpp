/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: 
Description:

********************************************* */ 
#include <iostream>
#define WINDOWS

#ifdef WINDOWS
    #include <windows.h>
#elif LINUX
    #include <unistd.h>
#elif MACOS
    #icnlude <proc.h>
#endif

int main(){
    #ifdef WINDOWS
        
    #elif LINUX
       
    #elif MACOS
       
    #endif

    return 0;
}