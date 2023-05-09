/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name:  RedirectedPipes.cpp

********************************************* */ 

#include "PSI_RedirectedPipes.hpp"

EXPORTAPI void PSI_Winpipe(string command, string out)
{
    HANDLE g_hChildStd_OUT_Rd = NULL;
    HANDLE g_hChildStd_OUT_Wr = NULL;
    SECURITY_ATTRIBUTES saAttr;
    saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
    saAttr.bInheritHandle = TRUE;
    saAttr.lpSecurityDescriptor = NULL;
    CreatePipe(&g_hChildStd_OUT_Rd, &g_hChildStd_OUT_Wr, &saAttr, 0);
    char buffer[128];
    sprintf(buffer,"C:\\Windows\\System32\\cmd.exe /c %s",command.c_str());
    LPSTR szCmdline = buffer;
    PROCESS_INFORMATION piProcInfo;
    STARTUPINFO siStartInfo;
    BOOL bSuccess = FALSE;
    ZeroMemory(&piProcInfo, sizeof(PROCESS_INFORMATION));
    ZeroMemory(&siStartInfo, sizeof(STARTUPINFO));
    siStartInfo.cb = sizeof(STARTUPINFO);
    siStartInfo.hStdError = g_hChildStd_OUT_Wr;
    siStartInfo.hStdOutput = g_hChildStd_OUT_Wr;
    siStartInfo.dwFlags |= STARTF_USESTDHANDLES;
    bSuccess = CreateProcess(NULL,
                             szCmdline,
                             NULL,
                             NULL,
                             TRUE,
                             0,
                             NULL,
                             NULL,
                             &siStartInfo,
                             &piProcInfo);

    {
        CloseHandle(piProcInfo.hProcess);
        CloseHandle(piProcInfo.hThread);
        CloseHandle(g_hChildStd_OUT_Wr);
    }
    HANDLE new_stdout = CreateFileA(out.c_str(),
                                    GENERIC_WRITE,
                                    0,
                                    NULL,
                                    CREATE_NEW,
                                    FILE_ATTRIBUTE_READONLY,
                                    NULL);
    SetStdHandle(STD_OUTPUT_HANDLE, new_stdout);
    DWORD dwRead, dwWritten;
    CHAR chBuf[BUFSIZE];
    bSuccess = FALSE;
    HANDLE hParentStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    for (;;)
    {
        bSuccess = ReadFile(g_hChildStd_OUT_Rd, chBuf, BUFSIZE, &dwRead, NULL);
        if (!bSuccess || dwRead == 0)
            break;

        bSuccess = WriteFile(hParentStdOut, chBuf,
                             dwRead, &dwWritten, NULL);
        if (!bSuccess)
            break;
    }
}

EXPORTAPI void  PSI_pipe(string command, string out)
{
    freopen(out.c_str(), "a+", stdout);
    system(command.c_str());
}
