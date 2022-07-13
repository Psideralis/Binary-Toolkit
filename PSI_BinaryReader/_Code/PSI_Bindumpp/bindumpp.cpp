/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: bindumpp.cpp
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

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <cmath>

/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: 
Description:

********************************************* */ 
#include <iostream>

#ifdef WINDOWS
    
#elif LINUX
   
#elif MACOS
    
#endif

#define WINDOWS

int main(int argc, char const *argv[]){
    for (size_t i = 0; i < argc; i++)
    {   
        if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else if (argv[i]=="-"){
        }else{
        }
    }
    /* LOAD FILE */
    std::ifstream myFile;
    std::string line;
    std::string text;
    myFile.open(argv[1], std::ios::binary);
    while( getline(myFile, line) ){
        text.append(line);
    }
    myFile.close();
    /* SHOW THE BINARY CODE */
    if (argc == 2){
        std::cout << " ";
        for (int i = 1; i < text.length()+1; i++){
            std::bitset<8> myBuffer (text[i-1]);
            std::cout << std::setw(0) << myBuffer << ' ';
            if( i%8 == 0){
                std::cout << "\n";
            }
        }
        std::cout << "\n DATA: " << text.length() <<" Bytes / "<< text.length()/(pow(2,10))<<" KB / " << text.length()/(pow(2,20))<<" MB / " << text.length()/(pow(2,30))<<" GB " << text.length()/(pow(2,40))<<" TB.";
        std::cout << "\n FILENAME: " << argv[1] << ".\n";
    }else{
        std::string param = "-f";
        if (argv[2] == param){
            /* LOAD FILE */
            std::ofstream outputFile;
            if (argc == 3){
                std::string file = argv[1];
                file = file.substr(0, file.size()-4);
                outputFile.open ( file.append(".dmp") , std::ios::trunc );
            }else if (argc == 4){
                std::string file = argv[3];
                outputFile.open ( file , std::ios::trunc );
            }
            outputFile << "\nDATA: " << text.length() <<" Bytes / "<< text.length()/(pow(2,10))<<" KB / " << text.length()/(pow(2,20))<<" MB / " << text.length()/(pow(2,30))<<" GB " << text.length()/(pow(2,40))<<" TB.";
            outputFile << "\nFILENAME: " << argv[1] << "\n\n";  
            for (int i = 1; i < text.length()+1; i++){
                std::bitset<8> myBuffer (text[i-1]);
                outputFile << std::setw(0) << myBuffer << ' ';
                if( i%8 == 0){
                    outputFile << "\n";
                }
            }
   
            outputFile.close();
        }
    }
    return 0;
}