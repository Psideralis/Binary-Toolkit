/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  PSI_SocketServer.hpp

********************************************* */

#ifndef PSI_SOCKETCLIENT
#define PSI_SOCKETCLIENT

#include "../PSI_ProgrammingUtilities.hpp"

#define WINDOWS

#ifdef WINDOWS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Mswsock.lib")
#pragma comment(lib, "AdvApi32.lib")
#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "27015"
#endif

#ifndef WINDOWS
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 7755
#endif

template <typename T>
class EXPORTAPI PSI_SocketClient
{
private:
#ifdef WINDOWS
    WSADATA wsaData;
    SOCKET ConnectSocket = INVALID_SOCKET;
    struct addrinfo *result = NULL,
                    *ptr = NULL,
                    hints;
    const char *sendbuf = "this is a test";
    char recvbuf[DEFAULT_BUFLEN];
    int iResult;
    int recvbuflen = DEFAULT_BUFLEN;
#endif
#ifndef WINDOWS
    int sock = 0, valread, client_fd;
    struct sockaddr_in serv_addr;
#endif
public:
    PSI_SocketClient(){};
    ~PSI_SocketClient();
    void init(string ip, int port);
    void connect();
    void close();
};

#endif