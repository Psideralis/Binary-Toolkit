/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: bindumpp.cpp
Description:  A dump program with basic
    steneography.
********************************************* */ 

/* *********************************************
INCLUDES:
    iomanip
    iostream
    fstream
    string
    bitset
    cmath
MACROS:

STRUCTS:

ENUMS:

FUNCTIONS:
    audio()
    morse()
    image()
    video()
    curve()
    polynomial()
    polyhedra()
    wave()
    condensate()
    file()
    bin()
    oct()
    hex()
    ascii()
    utf8()
    utf16()
    utf32()
    custom()
MANUAL:

    bindump++ [parameters] [options] [file]

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

void audio(){
    
}

void morse(){

}

void image(){

}

void video(){

}

void curve(){

}

void polynomial(){

}

void polyhedra(){

}

void wave(){

}

void condensate(){

}

void file(){
    std::string param = "-f";
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
    outputFile.close();
}

void bin(){
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
}

void oct(){

}

void hex(){

}

void utf8(){

}

void utf16(){

}

void utf32(){

}

void custom(){
    
}

int main(int argc, char const *argv[]){
    std::ifstream myFile;
    std::string line;
    std::string text;
    myFile.open(argv[1], std::ios::binary);
    while( getline(myFile, line) ){
        text.append(line);
    }
    myFile.close();
    for (size_t i = 0; i < argc; i++)
    {   
        if (argv[i]=="-audio" || argv[i]=="-a"){
            audio();
        }else if (argv[i]=="-morse"  || argv[i]=="-m"){
            morse();
        }else if (argv[i]=="-image"  || argv[i]=="-i"){
            image();
        }else if (argv[i]=="-video"  || argv[i]=="-v"){
            video();
        }else if (argv[i]=="-curve"  || argv[i]=="-c"){
            curve();
        }else if (argv[i]=="-polgrad"  || argv[i]=="-p"){
            polynomial();
        }else if (argv[i]=="-plygrad"  || argv[i]=="-y"){
            polyhedra();
        }else if (argv[i]=="-wave"  || argv[i]=="-w"){
            wave();
        }else if (argv[i]=="-condensate"  || argv[i]=="-d"){
            condensate();
        }else if (argv[i]=="-file"  || argv[i]=="-f"){
            file();
        }else if (argv[i]=="-binary"  || argv[i]=="-b"){
            bin();
        }else if (argv[i]=="-octal"  || argv[i]=="-o"){
            oct();
        }else if (argv[i]=="-hexadecimal"  || argv[i]=="-a"){
            hex();
        }else if (argv[i]=="-utf8"  || argv[i]=="-u8"){
            utf8();
        }else if (argv[i]=="-utf16"  || argv[i]=="-u16"){
            utf16();
        }else if (argv[i]=="-utf32"  || argv[i]=="-u32"){
            utf32();
        }else if (argv[i]=="-custom"  || argv[i]=="-cct"){
            custom();
        }else{
        }
    }
    return 0;
}