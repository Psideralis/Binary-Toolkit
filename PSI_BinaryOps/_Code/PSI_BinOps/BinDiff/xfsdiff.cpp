/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: 
Description:

********************************************* */ 
#include <iostream>
#include <filesystem>>

#ifdef WINDOWS
    
#elif LINUX
   
#elif MACOS
    
#endif

#define WINDOWS

int main(){
    #ifdef WINDOWS
        const std::filesystem::path sandbox{"C:\\"};
    #elif LINUX
        const std::filesystem::path sandbox{"/"};
    #elif MACOS
        const std::filesystem::path sandbox{"/"};
    #endif
    for (auto const& dir_entry : std::filesystem::recursive_directory_iterator{sandbox}) 
    {
        std::cout << dir_entry << '\n';
    }
    return 0;
}