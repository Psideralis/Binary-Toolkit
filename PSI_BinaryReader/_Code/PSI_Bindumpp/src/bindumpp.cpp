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

int main(int argc, char const *argv[])
{
    std::ifstream myFile;
    std::ofstream outputFile;
    std::string outFile = argv[1];
    outFile = outFile.substr(0, outFile.size() - 4);
    outputFile.open(outFile.append(".dmp"), std::ios::trunc);
    std::string line;
    std::string text;
    myFile.open(argv[1], std::ios::binary);
    while (getline(myFile, line))
    {
        text.append(line);
    }
    myFile.close();
    for (int i = 1; i < text.length() + 1; i++)
    {
        std::bitset<8> myBuffer(text[i - 1]);
        std::cout << std::setw(0) << myBuffer << ' ';
        if (i % 8 == 0)
        {
            std::cout << "\n";
        }
    }
    std::cout << "\nDATA: " << text.length() << " Bytes / " << text.length() / (pow(2, 10)) << " KB / " << text.length() / (pow(2, 20)) << " MB / " << text.length() / (pow(2, 30)) << " GB " << text.length() / (pow(2, 40)) << " TB.";
    std::cout << "\nFILENAME: " << argv[1] << "\n\n";
    outputFile.close();
    return 0;
}