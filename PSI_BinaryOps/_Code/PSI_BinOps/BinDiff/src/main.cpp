#include <iostream>
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[])
{
    // FILE SYSTEM
    int ch;
    FILE* myfile, * mypipe;
    myfile = fopen("./myfile.txt","w+");
    mypipe = _popen("tree","r");
    while( (ch=fgetc(mypipe)) != EOF)
        fputc(ch,myfile);
    _pclose(mypipe);
    fclose(myfile);
    // PROCESS
    int ch;
    FILE* myfile, * mypipe;
    myfile = fopen("./myfile.txt","w+");
    mypipe = _popen("tasklist","r");
    while( (ch=fgetc(mypipe)) != EOF)
        fputc(ch,myfile);
    _pclose(mypipe);
    fclose(myfile);
    // NETWORK
    int ch;
    FILE* myfile, * mypipe;
    myfile = fopen("./myfile.txt","w+");
    mypipe = _popen("netstat -aonq","r");
    while( (ch=fgetc(mypipe)) != EOF)
        fputc(ch,myfile);
    _pclose(mypipe);
    fclose(myfile);

    // ORGANIZATION
    int ch;
    FILE* myfile, * mypipe;
    myfile = fopen("./myfile.txt","w+");
    mypipe = _popen("net user","r");
    while( (ch=fgetc(mypipe)) != EOF)
        fputc(ch,myfile);
    _pclose(mypipe);
    fclose(myfile);
    int ch;
    FILE* myfile, * mypipe;
    myfile = fopen("./myfile.txt","w+");
    mypipe = _popen("net localgroup","r");
    while( (ch=fgetc(mypipe)) != EOF)
        fputc(ch,myfile);
    _pclose(mypipe);
    fclose(myfile);
    return 0;
}
