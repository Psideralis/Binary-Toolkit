/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: binpitclient.cpp
Description: Binpit client. Listen to binary
pit server. Send data of system and network
monitor to server and with authorization can
receive data from server over all operations.

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
    PSI_SocketClient<int>* myClient = new PSI_SocketClient<int>();
    myClient->init("0.0.0.0",8080);
    do{
        myClient->connect();
        /*
        
            TODO
        
        */
    }while(result !=0);
    myClient->close();
}