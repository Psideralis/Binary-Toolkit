/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  RedirectedPipes.hpp

********************************************* */ 

#include "stdlib.h"
#include "stdio.h"
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>
#include <string>

using namespace std;

#define BUFSIZE 4096

#define EXPORT

#ifdef EXPORT
   #define EXPORTAPI    __declspec(dllexport)
#else
   #define IMPORTAPI    __declspec(dllimport)
#endif

EXPORTAPI void PSI_Winpipe(string command, string out);
EXPORTAPI void PSI_pipe(string command, string out);