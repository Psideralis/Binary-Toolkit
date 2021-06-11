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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // DECLARATION
    FILE* inBinary;
    char* buffer[20] = {0};
    // OPEN FILE
    inBinary = fopen("./testfile.txt","rb");
    // CHECK FILE
    if (inBinary == NULL){
        printf("No file load assigned.");
        exit(1);
    }
    // READ FILE
    fread(buffer, sizeof(buffer),1,inBinary);
    for (int i = 0; i < 20; i++){
        printf("%u- %d",buffer[i], sizeof(buffer[i]));
    }
    // CLOSE FILE
    fclose(inBinary);
    return 0;
}
