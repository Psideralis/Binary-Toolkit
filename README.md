# Binary-Reader
## Author: 
Psideralis<br/>
## License: 
GNU General Public License 3.0 & Psideralis Commune Privative License<br/>
## Status:
Public - Progress: 35%<br/>
## Version
00.00.001.001<br/>
## Description:
Reads any file and ouput to file its binary (octal,hex,ascii,utf) dump.<br/>

## Versions:<br/>
  ### Python : pydump  00.00.001.001<br/>
    Manual:

      Description:
        pydump.py [file] [parameters] -out:[filename]
        output: ./file.dmp or ./[filename]
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
  ### C++     : bindump++   00.00.001.001<br/>
    Manual:
    
      Description:
        cdump [file] [parameters] -out:[filename]
        output: ./file.dmp or ./[filename]
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
  ### C       : cdump     00.00.001.001<br/>
    Manual:
    
      Description:
        bindumpp [file] [parameters] -out:[filename]
        output: ./file.dmp or ./[filename]
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.

## Output file format:
  ### HEADER:<br/>
    Output filename: "Filename"
    Output filepath: "Filepath"
    Date: "Date of read"
    Time: "Time of read"
  ### BODY:<br/>
    "DATA IN COLUMNS" | "ASCII OR UTF-8 TABLE IF -a or -u"
  ### FOOTER:<br/>
    Read filename: "Filename"
    Read filepath: "Filepath"
    Date: "Date of read"
    Time: "Time of read"
    Data: "bits read" Bits, "bytes read" Bytes, "KB read" KB, "MB read" MB, "GB read" GB, "TB read" TB.
    Read time: "Read time"
    Speed: "Read speed"
    File format: "Tries to output file format"

## Requirements:<br/>
  ### WINDOWS:<br/>
    - python
    - cl 
    - nmake 
    - cmake 
  ### LINUX:<br/>
    - python
    - gcc
    - g++
    - make 
    - cmake 
  ### MAC:<br/>
    - python
    - gcc
    - g++
    - make 
    - cmake 

## Compilation:<br/>
  ### WINDOWS:<br/>
    Python  : No compilation!
    C++     : nmake or cmake
    C       : nmake or cmake
  ### LINUX:<br/>
    Python  : No compilation!
    C++     : make or cmake
    C       : make or cmake
  ### MAC:<br/>
    Python  : No compilation!
    C++     : make or cmake
    C       : make or cmake
## Installation:<br/>
  ### WINDOWS:
    PATH = ""%HOME%\BinaryReader"
    Python,C,C++  : 
      ./Script/install.bat
    OR
      nmake install
    OR
      mkdir build
      cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=$(INSTALL PATH)
      cmake --build . OR make
      make install     
  ### LINUX:
    PATH = "/usr/bin"
    Python,C,C++  : ./Script/install.sh
    OR
      make install
    OR
      mkdir build
      cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=$(INSTALL PATH)
      cmake --build . OR make
      make install     
  ### MAC:
    PATH = "/usr/bin"
    Python,C,C++  : ./Script/install.sh
    OR
      make install
    OR
      mkdir build
      cd build
      cmake .. -DCMAKE_INSTALL_PREFIX=$(INSTALL PATH)
      cmake --build . OR make
      make install     
## Uninstallation:<br/>
  ### WINDOWS:
    Python,C,C++  :
      ./Script/uninstall.bat
    OR
      make uninstall
  ### LINUX:
    Python,C,C++  : 
      ./Script/uninstall.sh
    OR
      make uninstall
  ### MAC:
    Python,C,C++  : 
      ./Script/uninstall.sh
    OR
      make uninstall