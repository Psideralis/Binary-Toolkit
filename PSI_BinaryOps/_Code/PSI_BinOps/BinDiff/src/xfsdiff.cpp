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

#include "PSI_ProgrammingUtilities.hpp"

#define WINDOWS

int main(){
#ifdef WINDOWS
    PSI_Winpipe("tree","output.txt");
#endif
#ifndef WINDOWS
    PSI_pipe("cat /etc/passwd","output.txt");
#endif
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