/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  PSI_SocketServer.cpp

    - Multithreaded
    - Concurrent
    - Distributed
    - Serialized

********************************************* */

#include "PSI_SocketServer.hpp"

template <typename T>
void PSI_SocketServer<T>::init(string ip, int port)
{
#ifdef WINDOWS
    this->iResult = WSAStartup(MAKEWORD(2, 2), &this->wsaData);
    if (this->iResult != 0)
    {
        printf("WSAStartup failed with error: %d. \n", this->iResult);
        return 1;
    }
    ZeroMemory(&this->hints, sizeof(this->hints));
    this->hints.ai_family = AF_INET;
    this->hints.ai_socktype = SOCK_STREAM;
    this->hints.ai_protocol = IPPROTO_TCP;
    this->hints.ai_flags = AI_PASSIVE;
    this->iResult = getaddrinfo(NULL, DEFAULT_PORT, &this->hints, &this->result);
    if (this->iResult != 0)
    {
        printf("getaddrinfo failed with error: %d. \n", this->iResult);
        WSACleanup();
        return 1;
    }
    this->ListenSocket = socket(this->result->ai_family, this->result->ai_socktype, this->result->ai_protocol);
    if (this->ListenSocket == INVALID_SOCKET)
    {
        printf("Socket failed with error: %ld. \n", WSAGetLastError());
        freeaddrinfo(this->result);
        WSACleanup();
        return 1;
    }
    freeaddrinfo(this->result);
    this->iResult = bind(this->ListenSocket, this->result->ai_addr, (int)this->result->ai_addrlen);
    if (this->iResult == SOCKET_ERROR)
    {
        printf("Bind failed with error: %d. \n", WSAGetLastError());
        freeaddrinfo(this->result);
        closesocket(this->ListenSocket);
        WSACleanup();
        return 1;
    }
#endif
#ifndef WINDOWS
    if ((this->server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("Socket failed.");
        exit(EXIT_FAILURE);
    }
    if (setsockopt(this->server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &this->opt, sizeof(this->opt)))
    {
        perror("Setsockopt failed.");
        exit(EXIT_FAILURE);
    }
    this->address.sin_family = AF_INET;
    this->address.sin_addr.s_addr = INADDR_ANY;
    this->address.sin_port = htons(PORT);
    this->address.sin_family = AF_INET;
    this->address.sin_addr.s_addr = INADDR_ANY;
    this->address.sin_port = htons(PORT);
    if (bind(this->server_fd, (struct sockaddr *)&this->address, sizeof(this->address)) < 0)
    {
        perror("Bind failed".);
        exit(EXIT_FAILURE);
    }
    if (listen(this->server_fd, 3) < 0)
    {
        perror("Listen failed.");
        exit(EXIT_FAILURE);
    }
#endif
}

template <typename T>
void PSI_SocketServer<T>::listen()
{
#ifdef WINDOWS
    // CREATE THREADING
    this->ClientSocket = accept(this->ListenSocket, NULL, NULL);
    if (this->ClientSocket == INVALID_SOCKET)
    {
        printf("Accept failed with error: %d. \n", WSAGetLastError());
        closesocket(this->ListenSocket);
        WSACleanup();
        return 1;
    }
    closesocket(this->ListenSocket);
    do
    {
        this->iResult = recv(this->ClientSocket, this->recvbuf, this->recvbuflen, 0);
        if (this->iResult > 0)
        {
            printf("Bytes received: %d. \n", this->iResult);

            this->iSendResult = send(this->ClientSocket, this->recvbuf, this->iResult, 0);
            if (this->iSendResult == SOCKET_ERROR)
            {
                printf("Send failed with error: %d. \n", WSAGetLastError());
                closesocket(this->ClientSocket);
                WSACleanup();
                return 1;
            }
            printf("Bytes sent: %d. \n", this->iSendResult);
        }
        else if (this->iResult == 0)
            printf("Connection closing...\n");
        else
        {
            printf("Recv failed with error: %d. \n", WSAGetLastError());
            closesocket(this->ClientSocket);
            WSACleanup();
            return 1;
        }
    } while (iResult > 0);
    this->iResult = shutdown(this->ClientSocket, SD_SEND);
    if (this->iResult == SOCKET_ERROR)
    {
        printf("Shutdown failed with error: %d\n", WSAGetLastError());
        closesocket(this->ClientSocket);
        WSACleanup();
        return 1;
    }
    this->closesocket(this->ClientSocket);
#endif
#ifndef WINDOWS
    if ((this->new_socket = accept(this->server_fd, (struct sockaddr *)&this->address, (socklen_t *)&this->addrlen)) < 0)
    {
        perror("Accept error.");
        exit(EXIT_FAILURE);
    }
    this->valread = read(this->new_socket, this->buffer, 1024);
    printf("%s. \n", this->buffer);
    send(this->new_socket, "Hello", strlen("Hello"), 0);
    close(this->new_socket);
#endif
}

template <typename T>
void PSI_SocketServer<T>::close()
{
#ifdef WINDOWS
    WSACleanup();
#endif
#ifndef WINDOWS
    shutdown(this->server_fd, SHUT_RDWR);
    return 0;
#endif
}