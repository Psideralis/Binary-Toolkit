/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: cdump.c
Description: A dump program with basic
    steneography.
********************************************* */ 

/* *********************************************
INCLUDES:
    stdio.h
    stdlib.h
    string.h
MACROS:
    toOct
    toBin
STRUCTS:

ENUMS:

FUNCTIONS:

MANUAL:

bindump [parameters] [options] [file]

    Options:
        -audio: output an audio representation of the binary.
        -morse: output an morse code representation of the binary.
        -image: output an image representation of the binary.
        -video: output an video representation of the binary.
        -curve: output an curve representation of the binary.
        -polgrad: output a polygon gradient representation of the binary.
        -plygrad: output a polyhedron gradient representation of the binary.
        -wave: output an wave representation of the binary.
        -condensate: output an condensate representation of the binary.
    General Parameters:
        -f [filename]: output dump file.
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path] (See CCT File Format below)

********************************************* */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define toOct(x){           \
    int oct = 0, i = 1;     \
    while (x != 0)          \
    {                       \
        oct += (x % 8) * i; \
        x /= 8;             \
        i *= 10;            \
    }                       \
    return oct;             \
}


#define toBin(x){                               \
    static char b[9];                           \
    b[0] = '\0';                                \
    int z;                                      \
    for (z = 128; z > 0; z >>= 1)               \
    {                                           \
        strcat(b, ((x & z) == z) ? "1" : "0");  \
    }                                           \
    return b;                                   \
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

int main(int argc, char const *argv[]){
    FILE* inBinary;
    FILE* outBinary;
    char* buffer;
    char* out;
    char wbuffer[8] = {0};
    int out_size = strlen(argv[1]);
    long end = 0;
    inBinary = fopen(argv[1],"rb");
    fseek(inBinary, 0L, SEEK_END);
    end = ftell(inBinary);
    rewind(inBinary);
    buffer = calloc(1,end);
    if (inBinary == NULL){
        printf("No file load assigned or file not found.");
        exit(1);
    }
    fread(buffer, 1, end, inBinary);
    fclose(inBinary);
    out = calloc(1, out_size);
    for(int m = 0; m < out_size-4 ; m++){
        out[m] = argv[1][m];
    }
    strcat(out,".dmp");
    outBinary = fopen(out,"w+");
    fclose(outBinary);
    free(buffer);
    free(out);
    return 0;
}
