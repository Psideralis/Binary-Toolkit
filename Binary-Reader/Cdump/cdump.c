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

const int toOct(int x)
{
    int oct = 0, i = 1;
    while (x != 0)
    {
        oct += (x % 8) * i;
        x /= 8;
        i *= 10;
    }
    return oct;
}

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

void bin(FILE* file, char* buffer, long end, char* wbuffer, char mode){
    int k = 0;
    for (int i = 0; i < end; i++){
    if ((i+1)%8 != 0){
        wbuffer[i%8] = buffer[i];
        fprintf(file, "%s \t",toBin(buffer[i]));
        if( k == (int)(end/8) && i == end-1 ){
            for (int j= 0; j<(end%(((int)end/8)*8)); j++){
                fprintf(file, "%c",wbuffer[j]);
            }
        }
    } else{
    k += 1;
        fprintf(file, "%s \t|\t",toBin(buffer[i]));
        wbuffer[7] = buffer[i];
        for (int j= 0; j<8; j++){
            if (wbuffer[j] != '\n' && wbuffer[j] != '\r' && (wbuffer[j-1] != '\n' && wbuffer[j] != '\r') ){
                fprintf(file, "%c    ",wbuffer[j]);
            }
            else{
                if (wbuffer[j] == '\n'){
                    fprintf(file, "\\n   ");
                }else if (wbuffer[j] == '\r'){
                    fprintf(file, "\\r   ");
                } else if  (wbuffer[j-1] == '\n' && wbuffer[j] != '\r'){
                    fprintf(file, "\\n\\r ");
                }
            }
        }
        fprintf(file, "\n");
    }
    }
    if(end<8){
        for (int j= 0; j<end; j++){
            fprintf(file, "%c",wbuffer[j]);
        }
    }
    fclose(file);
}

void oct(FILE* file, char* buffer, long end, char* wbuffer, char mode){
        int k = 0;
    for (int i = 0; i < end; i++){
    if ((i+1)%8 != 0){
        wbuffer[i%8] = buffer[i];
        fprintf(file, "%s \t",toBin(buffer[i]));
        if( k == (int)(end/8) && i == end-1 ){
            for (int j= 0; j<(end%(((int)end/8)*8)); j++){
                fprintf(file, "%c",wbuffer[j]);
            }
        }
    } else{
    k += 1;
        fprintf(file, "%s \t|\t",toBin(buffer[i]));
        wbuffer[7] = buffer[i];
        for (int j= 0; j<8; j++){
            if (wbuffer[j] != '\n' && wbuffer[j] != '\r' && (wbuffer[j-1] != '\n' && wbuffer[j] != '\r') ){
                fprintf(file, "%c    ",wbuffer[j]);
            }
            else{
                if (wbuffer[j] == '\n'){
                    fprintf(file, "\\n   ");
                }else if (wbuffer[j] == '\r'){
                    fprintf(file, "\\r   ");
                } else if  (wbuffer[j-1] == '\n' && wbuffer[j] != '\r'){
                    fprintf(file, "\\n\\r ");
                }
            }
        }
        fprintf(file, "\n");
    }
    }
    if(end<8){
        for (int j= 0; j<end; j++){
            fprintf(file, "%c",wbuffer[j]);
        }
    }
    fclose(file);
}

void hex(FILE* file, char* buffer, long end, char* wbuffer, char mode){
        int k = 0;
    for (int i = 0; i < end; i++){
    if ((i+1)%8 != 0){
        wbuffer[i%8] = buffer[i];
        fprintf(file, "%s \t",toBin(buffer[i]));
        if( k == (int)(end/8) && i == end-1 ){
            for (int j= 0; j<(end%(((int)end/8)*8)); j++){
                fprintf(file, "%c",wbuffer[j]);
            }
        }
    } else{
    k += 1;
        fprintf(file, "%s \t|\t",toBin(buffer[i]));
        wbuffer[7] = buffer[i];
        for (int j= 0; j<8; j++){
            if (wbuffer[j] != '\n' && wbuffer[j] != '\r' && (wbuffer[j-1] != '\n' && wbuffer[j] != '\r') ){
                fprintf(file, "%c    ",wbuffer[j]);
            }
            else{
                if (wbuffer[j] == '\n'){
                    fprintf(file, "\\n   ");
                }else if (wbuffer[j] == '\r'){
                    fprintf(file, "\\r   ");
                } else if  (wbuffer[j-1] == '\n' && wbuffer[j] != '\r'){
                    fprintf(file, "\\n\\r ");
                }
            }
        }
        fprintf(file, "\n");
    }
    }
    if(end<8){
        for (int j= 0; j<end; j++){
            fprintf(file, "%c",wbuffer[j]);
        }
    }
    fclose(file);
}

int main(int argc, char const *argv[])
{
    // DECLARATION
    FILE* inBinary;
    FILE* outBinary;
    char* buffer;
    char* out;
    long end = 0;
    char wbuffer[8] = {0};
    int out_size = strlen(argv[1]);
    // OPEN FILE
    inBinary = fopen(argv[1],"rb");
    // INITIALIZATION
    fseek(inBinary, 0L, SEEK_END);
    end = ftell(inBinary);
    rewind(inBinary);
    buffer = calloc(1,end);
    // CHECK FILE
    if (inBinary == NULL){
        printf("No file load assigned or file not found.");
        exit(1);
    }
    // READ FILE
    fread(buffer, 1, end, inBinary);
    fclose(inBinary);
    // OPEN FILE
    out = calloc(1, out_size);
    for(int m = 0; m < out_size-4 ; m++){
        out[m] = argv[1][m];
    }
    strcat(out,".dmp");
    outBinary = fopen(out,"w+");
    // PROCESS
    if (argc == 1){
        printf("Manual.");
        fclose(outBinary);
    } else if (argc == 2){
        bin(outBinary,buffer,end, wbuffer, 'x');
    } else if (argc == 3){
        for (int i = 1; i< argc; i++){
            if ( strncmp(argv[i],"-b",3) == 0){
                hex(outBinary,buffer, end, wbuffer,'x');
            }
            if ( strncmp(argv[i],"-o",3) == 0){
                oct(outBinary,buffer, end, wbuffer,'x');
            }
            if ( strncmp(argv[i],"-h",3) == 0){
                bin(outBinary,buffer, end, wbuffer,'x');
            }
        }
    } else if (argc == 4){
        for (int i = 0; i< argc; i++){
            if ( strncmp(argv[i],"-b",3) == 0){
                for (int j = 0; j< argc; j++){
                    if (strncmp(argv[j],"-a",3) == 0){
                        bin(outBinary,buffer, end, wbuffer, 'a');
                    }else if (strncmp(argv[j],"-u",3) == 0 ){
                        bin(outBinary,buffer, end, wbuffer, 'u');
                    }else{
                        printf("Argument error.");
                    }
                }
            }
            if ( strncmp(argv[i],"-o",3) == 0){
                for (int j = 0; j< argc; j++){
                    if (strncmp(argv[j],"-a",3) == 0){
                        oct(outBinary,buffer, end, wbuffer, 'a');
                    }else if (strncmp(argv[j],"-u",3) == 0 ){
                        oct(outBinary,buffer, end, wbuffer, 'u');
                    }else{
                        printf("Argument error.");
                    }
                }
            }
            if ( strncmp(argv[i],"-h",3) == 0){
                for (int j = 0; j< argc; j++){
                    if (strncmp(argv[j],"-a",3) == 0){
                        hex(outBinary,buffer, end, wbuffer, 'a');
                    }else if (strncmp(argv[j],"-u",3) == 0 ){
                        hex(outBinary,buffer, end, wbuffer, 'u');
                    }else{
                        printf("Argument error.");
                    }
                }
            }
        }
    } else {
        printf("To many arguments.");
        fclose(outBinary);
    }
    free(buffer);
    free(out);
    return 0;
}
