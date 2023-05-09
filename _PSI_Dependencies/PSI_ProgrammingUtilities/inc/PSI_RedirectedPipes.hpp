/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  RedirectedPipes.hpp

********************************************* */

#ifndef PSI_REDIRECTEDPIPES
#define PSI_REDIRECTEDPIPES

#include "../PSI_ProgrammingUtilities.hpp"

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>

#define BUFSIZE 4096

EXPORTAPI void PSI_Winpipe(string command, string out);
EXPORTAPI void PSI_pipe(string command, string out);

#endif