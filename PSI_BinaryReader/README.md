# Binary-Reader
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
### Status:
Public - Progress: 60%
### Version
00.00.001.000
### Description:
Reads any file and ouput to file its binary (octal,hex,ascii,utf-8,utf-16,utf-32,cct: custom code table) dump. Tries to output the format and the metadata of the file.
## Manual
See Binary Reader README.md

Windows requirments:
  - cl 
  - nmake 
  - cmake 

Linux requirements:
  - gcc
  - g++
  - make 
  - cmake 

## Versions:
  ### Python : pydump  00.00.000.001
    Manual:
      Description:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path]
  ### C++     : bindump++   00.00.000.001
    Manual:
      Description:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path]
  ### C       : bindump     00.00.000.001
    Manual:
      Description:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path]
## Output file format:
  ### HEADER:
    Output filename: "Filename"
    Output filepath: "Filepath"
    Date: "Date of read"
    Time: "Time of read"
  ### BODY:
    "DATA IN COLUMNS" | "ASCII OR UTF"
  ### FOOTER:
    Read filename: "Filename"
    Read filepath: "Filepath"
    Date: "Date of read"
    Time: "Time of read"
    Data: "bits read" Bits, "bytes read" Bytes, "KB read" KB, "MB read" MB, "GB read" GB, "TB read" TB.
    Read time: "Read time"
    Speed: "Read speed"
    File format: "Tries to output file format"
    Metadata: "Tries to output the metadata"
## Compilation:
  ### WINDOWS:
    Python  : No compilation!
    C++     : nmake or cmake
    C       : nmake or cmake
  ### LINUX:
    Python  : No compilation!
    C++     : make or cmake
    C       : make or cmake
## Installation:
  ### WINDOWS:
    PATH = ""%HOME%\AppData\LocalPrograms\Bindump"
    Python,C,C++  : ./Script/install.bat
  ### LINUX:
    PATH = "/usr/bin/Bindump"
    Python,C,C++  : ./Script/install.sh
## Uninstallation:
  ### WINDOWS:
    Python,C,C++  : ./Script/uninstall.bat
  ### LINUX:
    Python,C,C++  : ./Script/uninstall.sh
    
<!---
## Tools:
  ### Disassembler: 
  #### Tries to output assembly code from binary file. 
    Author: Psideralis
    License: GNU GPL
    Status: Unfinished
    Versions: 00.00.000.001
  ### Decompiler: 
  #### Tries to output C or C++ code from binary file or assembly file. 
    Author: Psideralis
    License: GNU GPL
    Status: Unfinished
    Versions: 00.00.000.001
  ### Disinterpreter: 
  #### Tries to output Python or C# code from C++ file. 
    Author: Psideralis
    License: GNU GPL
    Status: Unfinished
    Versions: 00.00.000.001
-->