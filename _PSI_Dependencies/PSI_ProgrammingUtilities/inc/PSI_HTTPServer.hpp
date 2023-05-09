/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  PSI_HTTPServer.hpp

********************************************* */

#ifndef PSI_HTTPPSERVER
#define PSI_HTTPPSERVER

#include "../PSI_ProgrammingUtilities.hpp"

#define WINDOWS

#ifdef WINDOWS
#ifndef UNICODE
#define UNICODE
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <http.h>
#endif

#ifdef LINUX
#include <sys/types.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <microhttpd.h>
#endif

class PSI_HTTPServer
{
private:
#ifdef WINDOWS
    ULONG buffer;
    ULONG output;
    PHANDLE hReqQueue = NULL;
    PHTTP_SERVER_SESSION_ID srvId;
    PHTTP_URL_GROUP_ID urlId;
#endif
#ifdef LINUX
    struct MHD_Daemon *daemon;
#endif
public:
    PSI_HTTPServer(){};
    ~PSI_HTTPServer();
    void create()
    {
#ifdef WINDOWS
        output = HttpInitialize(HTTPAPI_VERSION_2, HTTP_INITIALIZE_SERVER, NULL);
        HttpCreateServerSession(HTTPAPI_VERSION_2, srvId, 0);
        HttpCreateRequestQueue(HTTPAPI_VERSION_2, L"DefaultQueue", NULL, HTTP_CREATE_REQUEST_QUEUE_FLAG_CONTROLLER, hReqQueue);
#endif
#ifdef LINUX

#endif
    };
    void listen(string ip, int port)
    {
#ifdef WINDOWS
        HttpCreateUrlGroup(*srvId, urlId, 0);
        HttpAddUrlToUrlGroup(*urlId, NULL, NULL, 0);
#endif
#ifdef LINUX
        daemon = MHD_start_daemon(MHD_USE_INTERNAL_POLLING_THREAD,
                                  port,
                                  NULL, NULL,
                                  &answer_to_connection,
                                  NULL, MHD_OPTION_END);
#endif
    };
    void close()
    {
#ifdef WINDOWS
        HttpRemoveUrlFromUrlGroup(*urlId, NULL, 0);
        HttpCloseUrlGroup(*urlId);
        HttpCloseServerSession(*srvId);
        HttpCloseRequestQueue(*hReqQueue);
        HttpTerminate(HTTP_INITIALIZE_SERVER, 0);
    };
#endif
#ifdef LINUX
    MHD_stop_daemon(daemon);
#endif
    void mount(string mnt, string source);
    int service(string service, string url, function<void()> lambda);
#ifdef WINDOWS

#endif
#ifdef LINUX

#endif
};

class PSI_HTTPSServer
{
private:
#ifdef WINDOWS

#endif
#ifdef LINUX

#endif
public:
    PSI_HTTPSServer(){
#ifdef WINDOWS

#endif
#ifdef LINUX

#endif
    };
    ~PSI_HTTPSServer();
    void create(){};
    void listen(string ip, int port){};
    void close(){};

#ifdef WINDOWS

#endif
#ifdef LINUX

#endif
};

#endif