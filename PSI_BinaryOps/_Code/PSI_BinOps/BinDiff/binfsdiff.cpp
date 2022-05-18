/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: binfsdiff.h
Description: Create a backup of the filesystem
and if exist create a difference file. It checks
the filesyste path of all files, its size and
its content via a hash.

    -b : only creates backup and hash
    -c : compare previews backup and creates 
        diff file

********************************************* */ 

#include <filesystem>
#include <fstream>
#include <iostream>
using namespace std;
using namespace std::filesystem;

#define WINDOWS

int main(int argc, char const *argv[])
{
    std::fstream registry;
    registry.open("./FSBackupDiff.txt", ios::out);
    #ifdef MACOS
        const :path linuxRoot{"/"};
        for (auto const& dir_entry :  recursive_directory_iterator{linuxRoot}) 
        {
            registry << dir_entry.path().string().c_str() << "::";
            registry << dir_entry.file_size() << "Bytes ::"; 
            registry << "Hash: ." <<std::endl;
        }
    #endif
    #ifdef LINUX
        const :path linuxRoot{"/"};
        for (auto const& dir_entry :  recursive_directory_iterator{linuxRoot}) 
        {
            registry << dir_entry.path().string().c_str() << "::";
            registry << dir_entry.file_size() << "Bytes ::"; 
            registry << "Hash: ." <<std::endl;
        }
    #endif
    #ifdef WINDOWS
        path winRoot(L"C:/");
        cout << winRoot;
        for (auto const& dir_entry : recursive_directory_iterator{winRoot}) 
        {
            registry << dir_entry.path().string().c_str() << "::";
            registry << dir_entry.file_size() << "Bytes ::"; 
            registry << "Hash: ." <<std::endl;
        }
    #endif
    registry.close();
    /* code */
    return 0;
}
