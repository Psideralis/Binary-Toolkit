/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  ProgrammingUtilities.hpp

********************************************* */
#define EXPORT

#ifdef EXPORT
#define EXPORTAPI __declspec(dllexport)
#else
#define IMPORTAPI __declspec(dllimport)
#endif

#ifndef PSI_STDCPP_LIB
#define PSI_STDCPP_LIB
#include <functional>
#include <iostream>
#include <fstream>
#include <chrono>
#include <string>
#include <thread>
using namespace std;
#endif

#ifndef PSI_STDC_LIBS
#define PSI_STDC_LIBS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#endif

#include "inc/PSI_CommandParsing.hpp"
#include "inc/PSI_Debugging.hpp"
#include "inc/PSI_HttpServer.hpp"
#include "inc/PSI_HttpClient.hpp"
#include "inc/PSI_RedirectedPipes.hpp"
#include "inc/PSI_SocketServer.hpp"
#include "inc/PSI_SocketClient.hpp"