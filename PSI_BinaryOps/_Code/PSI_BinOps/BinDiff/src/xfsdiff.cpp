/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: xfsdiff.cpp
Description:

********************************************* */ 
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

#ifdef WINDOWS
    
#elif LINUX
   
#elif MACOS
    
#endif

#define WINDOWS

int main(){
    // CREATE BACKUP
    std::fstream fs;
    fs.open ("xfdiff.bkp.txt", std::fstream::in | std::fstream::app);
    #ifdef WINDOWS
        const std::filesystem::path sandbox{"./"};
    #elif LINUX
        const std::filesystem::path sandbox{"/"};
    #elif MACOS
        const std::filesystem::path sandbox{"/"};
    #endif
    for (auto const& dir_entry : std::filesystem::recursive_directory_iterator{sandbox}) 
    {
        fs << dir_entry << "\n";
    }
    fs.close();
    // COMPARE BACK UP
    std::fstream fs1, fs2, diff;
    fs1.open ("xfdiff1.bkp.txt", std::fstream::in | std::fstream::app);
    fs2.open ("xfdiff2.bkp.txt", std::fstream::in | std::fstream::app);
    diff.open ("xfdiff.diff.txt", std::fstream::in | std::fstream::app);
    while(!fs.eof()){
        char myline[250];
        char mylinecmp[250];
        fs1.getline(myline,250);
        fs2.getline(mylinecmp,250);
        if (strcmp(myline,mylinecmp) != 0){
            diff << mylinecmp << "\n";
        }
    }
    fs1.close();
    fs2.close();
    diff.close();
    return 0;
}