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
#include <stdio.h>
#include <stdlib.h>

#pragma comment(lib, "httpapi.lib")

#define ALLOC_MEM(cb) HeapAlloc(GetProcessHeap(), 0, (cb))

#define FREE_MEM(ptr) HeapFree(GetProcessHeap(), 0, (ptr))

int __cdecl main(int argc, char *argv[])
{
    ULONG buffer;
    ULONG output;
    HANDLE hReqQueue;
    HTTP_SERVER_SESSION_ID srvId;
    HTTP_URL_GROUP_ID urlId;
    HTTP_BINDING_INFO HttpBindingInfo = {0};
    /*
        CREATE
    */
    output = HttpInitialize(HTTPAPI_VERSION_2, HTTP_INITIALIZE_SERVER, NULL);
    if (output != NO_ERROR)
    {
        printf("Initialize error: %d",output);
        return 0;
    }
    output = HttpCreateServerSession(HTTPAPI_VERSION_2, &srvId, 0);
    if (output != NO_ERROR)
    {
        printf("Server session error: %d",output);
        return 0;
    }
    output = HttpCreateRequestQueue(HTTPAPI_VERSION_2,NULL, NULL,NULL, &hReqQueue);
    if (output != NO_ERROR)
    {
        printf("Request queue error: %d",output);
        return 0;
    }
    output = HttpCreateUrlGroup(srvId, &urlId, 0);
    if (output != NO_ERROR)
    {
        printf("Url group error: %d",output);
        return 0;
    }
    output = HttpAddUrlToUrlGroup(urlId, L"http://localhost:8080/", NULL, 0);
    if (output != NO_ERROR)
    {
        printf("Url add error: %d",output);
        return 0;
    }
    HttpBindingInfo.Flags.Present       = 1;
    HttpBindingInfo.RequestQueueHandle  = hReqQueue;
    HttpSetUrlGroupProperty(urlId,HttpServerBindingProperty, &HttpBindingInfo,sizeof(HttpBindingInfo));
    if (output != NO_ERROR)
    {
        printf("Url binding error: %d",output);
        return 0;
    }
    /*
        LISTEN
    */
    ULONG              result;
    HTTP_REQUEST_ID    requestId;
    DWORD              bytesRead;
    PHTTP_REQUEST      pRequest = NULL;
    PCHAR              pRequestBuffer;
    ULONG              RequestBufferLength;
    RequestBufferLength = sizeof(HTTP_REQUEST) + 2048;
    pRequestBuffer      = (PCHAR) ALLOC_MEM( RequestBufferLength );
    if (pRequestBuffer == NULL)
    {
        return ERROR_NOT_ENOUGH_MEMORY;
    }
    pRequest = (PHTTP_REQUEST)pRequestBuffer;
    HTTP_SET_NULL_ID( &requestId );
    for(;;)
    {
        RtlZeroMemory(pRequest, RequestBufferLength);
        result = HttpReceiveHttpRequest(
                    hReqQueue,
                    requestId,
                    0,
                    pRequest,
                    RequestBufferLength,
                    &bytesRead,
                    NULL
                    );
        printf("%d \n", result);
        if(NO_ERROR == result)
        {
            printf("DONE.");
        }
        else if(result == ERROR_MORE_DATA)
        {

        }else if(ERROR_CONNECTION_INVALID == result && 
                !HTTP_IS_NULL_ID(&requestId))
        {

        }else
        {
            break;
        }
        if(pRequestBuffer)
        {
            FREE_MEM( pRequestBuffer );
        }
    }
    /*
        DISPOSE
    */
    HttpRemoveUrlFromUrlGroup(urlId, L"http://localhost:8080/", HTTP_URL_FLAG_REMOVE_ALL);
    HttpCloseUrlGroup(urlId);
    HttpCloseServerSession(srvId);
    HttpCloseRequestQueue(hReqQueue);
    HttpTerminate(HTTP_INITIALIZE_SERVER, 0);
    return 0;
}