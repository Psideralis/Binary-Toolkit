/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: cdump.c
Description:
********************************************* */ 

/* *********************************************
DEFINES:

MACROS:

STRUCTS:

ENUMS:

TYPES:

CLASSES:

********************************************* */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* toBin(int x)
{
    static char b[9];
    b[0] = '\0';
    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }
    return b;
}

int main(int argc, char const *argv[])
{
    // DECLARATION
    FILE* inBinary;
    FILE *outBinary;
    long end;
    char* buffer;
    // OPEN FILE
    inBinary = fopen(argv[1],"rb");
    outBinary = fopen("out.dmp","w+");
    // INITIALIZATION
    fseek(inBinary, 0L, SEEK_END);
    end = ftell(inBinary);
    rewind(inBinary);
    buffer = malloc(end);
    memset(&buffer[0], 0, sizeof(buffer));
    // CHECK FILE
    if (inBinary == NULL){
        printf("No file load assigned.");
        exit(1);
    }
    // READ FILE
    fread(buffer, sizeof(buffer),1,inBinary);
    for (int i = 0; i < end; i++){
        if ((i+1)%8 != 0){
            fprintf(outBinary, "%s \t",toBin(buffer[i]));
        }else{
            fprintf(outBinary, "%s \n",toBin(buffer[i]));
        }
    }
    // CLOSE FILE
    fclose(inBinary);
    fclose(outBinary);
    return 0;
}
