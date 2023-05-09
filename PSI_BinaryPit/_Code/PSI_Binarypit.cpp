/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: binarypit.cpp
Description: Binary pit server. Receives data
from all clients operations. Can send data
to a higher node as client, with authorization
can receive data from a higher node.

Uses Psideralis Data Communication Protocols.
********************************************* */

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */

#include "PSI_ProgrammingUtilities.hpp"

int main(int argc, char const *argv[]){
    /*
    
        PARAM PARSING
    
    */
    int result = -1;
    PSI_SocketServer<int>* myServer = new PSI_SocketServer<int>();
    myServer->init("0.0.0.0",8080);
    do{
        myServer->listen();
        /*
        
            TODO
        
        */
    }while(result !=0);
    myServer->close();
}