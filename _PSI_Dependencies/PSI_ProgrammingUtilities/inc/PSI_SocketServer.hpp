/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  PSI_SocketServer.hpp

    - Multithreaded
    - Concurrent
    - Distributed
    - Serialized

********************************************* */

#ifndef PSI_SOCKETSERVER
#define PSI_SOCKETSERVER

#include "../PSI_ProgrammingUtilities.hpp"

#define WINDOWS

#ifdef WINDOWS
#undef UNICODE
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Mswsock.lib")
#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"
#endif

#ifndef WINDOWS
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 7755
#endif

template <typename T>
class EXPORTAPI PSI_SocketServer
{
private:
#ifdef WINDOWS
    WSADATA wsaData;
    int iResult;
    SOCKET ListenSocket = INVALID_SOCKET;
    SOCKET ClientSocket = INVALID_SOCKET;
    struct addrinfo *result = NULL;
    struct addrinfo hints;
    int iSendResult;
    char recvbuf[DEFAULT_BUFLEN];
    int recvbuflen = DEFAULT_BUFLEN;
#endif
#ifndef WINDOWS
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
#endif
public:
    PSI_SocketServer(){};
    ~PSI_SocketServer();
    void init(string ip, int port);
    void listen();
    void close();
};

#endif