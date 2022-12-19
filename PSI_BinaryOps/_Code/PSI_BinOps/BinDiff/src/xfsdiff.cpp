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

#define WINDOWS


int main(){
    #ifdef WINDOWS
    const std::filesystem::path sandbox{"C:/"};
    #elif LINUX
        const std::filesystem::path sandbox{"/"};
    #elif MACOS
        const std::filesystem::path sandbox{"/"};
    #endif

    // CREATE BACKUP
    std::fstream fs;
    fs.open ("xfdiff.bkp.txt", std::fstream::in | std::fstream::app);

    for (auto const& dir_entry : std::filesystem::recursive_directory_iterator{sandbox}) 
    {
        std::cout <<  dir_entry << "\n";
        fs << dir_entry << "\n";
    }
    fs.close();
    // COMPARE BACK UP

    return 0;
}