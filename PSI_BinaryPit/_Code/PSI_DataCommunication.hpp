/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  PSI_DataCommunication.hpp

********************************************* */ 

#ifndef PSI_DATACOMMUNICATION
#define PSI_DATACOMMUNICATION

/*

    OPEN

*/
/*
Name:
Description:
Properties:
*/
typedef struct SI_SOCKET_OPEN_CHANNEL_s{
    PSI_SESSION_OPEN_PACKAGE_t* Packages;



}PSI_SOCKET_OPEN_CHANNEL_t;
/*
Name:
Description:
Properties:
*/
typedef struct PSI_SESSION_OPEN_PACKAGE_s{
    PSI_APPLICATION_OPEN_DATA_t Data;



}PSI_SESSION_OPEN_PACKAGE_t;
/*
Name:
Description:
Properties:
*/
typedef struct PSI_APPLICATION_OPEN_DATA_s{
    void* Container;


    
}PSI_APPLICATION_OPEN_DATA_t;

/*

    CLOSED

*/
/*
Name:
Description:
Properties:
*/
typedef struct SI_SOCKET_CLOSED_CHANNEL_s{
    PSI_SESSION_CLOSED_PACKAGE_t* Packages;



}PSI_SOCKET_CLOSED_CHANNEL_t;
/*
Name:
Description:
Properties:
*/
typedef struct PSI_SESSION_CLOSED_PACKAGE_s{
    PSI_APPLICATION_CLOSED_DATA_t Data;



}PSI_SESSION_CLOSED_PACKAGE_t;
/*
Name:
Description:
Properties:
*/
typedef struct PSI_APPLICATION_CLOSED_DATA_s{
    void* Container;


    
}PSI_APPLICATION_CLOSED_DATA_t;

/*

    PROCLOISTER

*/
/*
Name:
Description:
Properties:
*/
typedef struct SI_SOCKET_PROCLOISTER_CHANNEL_s{
    PSI_SESSION_PROCLOISTE_PACKAGE_t* Packages;



}PSI_SOCKET_PROCLOISTER_CHANNEL_t;
/*
Name:
Description:
Properties:
*/
typedef struct PSI_SESSION_PROCLOISTER_PACKAGE_s{
    PSI_APPLICATION_PROCLOISTER_DATA_t Data;



}PSI_SESSION_PROCLOISTE_PACKAGE_t;
/*
Name:
Description:
Properties:
*/
typedef struct PSI_APPLICATION_PROCLOISTER_DATA_s{
    void* Container;


    
}PSI_APPLICATION_PROCLOISTER_DATA_t;


#endif