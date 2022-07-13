/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: xprocdiff.cpp
Description:

********************************************* */ 
#include <iostream>
#define WINDOWS

#ifdef WINDOWS
    #include <windows.h>
    #include <stdio.h>
    #include <tchar.h>
    #include <psapi.h>
#elif LINUX
    #include <unistd.h>
#elif MACOS
    #icnlude <proc.h>
#endif

void PrintProcessNameAndID( DWORD processID )
{
    TCHAR szProcessName[MAX_PATH] = TEXT("<unknown>");
    HANDLE hProcess = OpenProcess( PROCESS_QUERY_INFORMATION |
                                   PROCESS_VM_READ,
                                   FALSE, processID );
    if (NULL != hProcess )
    {
        HMODULE hMod;
        DWORD cbNeeded;
        if ( EnumProcessModules( hProcess, &hMod, sizeof(hMod), 
             &cbNeeded) )
        {
            GetModuleBaseName( hProcess, hMod, szProcessName, 
                               sizeof(szProcessName)/sizeof(TCHAR) );
        }
    }
    _tprintf( TEXT("%s  (PID: %u)\n"), szProcessName, processID );
    CloseHandle( hProcess );
}


int main(int argc, char const *argv[]){
    for (size_t i = 0; i < argc; i++)
    {   
        if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else{
        }
    }
    #ifdef WINDOWS
        DWORD aProcesses[1024], cbNeeded, cProcesses;
        unsigned int i;
        if ( !EnumProcesses( aProcesses, sizeof(aProcesses), &cbNeeded ) )
        {
            return 1;
        }
        cProcesses = cbNeeded / sizeof(DWORD);
        for ( i = 0; i < cProcesses; i++ )
        {
            if( aProcesses[i] != 0 )
            {
                PrintProcessNameAndID( aProcesses[i] );
            }
        }    
    #elif LINUX
       
    #elif MACOS
       
    #endif

    return 0;
}