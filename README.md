# Binary-Reader

## Author: 
Psideralis<br/>
## License: 
GNU GPL<br/>
## Description:
Reads any file and ouput to file its binary (octal,hex,ascii) dump.<br/>

Windows requirments:<br/>
  - cl <br/>
  - nmake <br/>
  - cmake <br/>

Linux requirements:<br/>
  - gcc<br/>
  - g++<br/>
  - make <br/>
  - cmake <br/>
## Versions:<br/>
  ### Python : pydump  0.0.01<br/>
    Manual:
      Description:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
  ### C++     : bindump++   0.0.01<br/>
    Manual:
      Description:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
  ### C       : bindump     0.0.01<br/>
    Manual:<br/>
      Description:<br/>
      Parameters:<br/>
        -b: output binary format.<br/>
        -o: output octal format.<br/>
        -h: ouptut hexadecimal format.<br/>
        -a: output ASCII format. Can be used with -b, -o or -h.<br/>
        -u: output UTF-8 format. Can be used with -b, -o or -h.<br/>
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
## Compilation:<br/>
  ### WINDOWS:<br/>
    Python  : No compilation!
    C++     : nmake
    C       : nmake
  ### LINUX:<br/>
    Python  : No compilation!
    C++     : make
    C       : make
## Installation:<br/>
  ### WINDOWS:
    PATH = "%HOME%/AppData/Bindump/"
    Python,C,C++  : ./Script/install.bat
  ### LINUX:
    PATH = "/usr/bin/Bindump"
    Python,C,C++  : ./Script/install.sh
## Uninstallation:<br/>
  ### WINDOWS:<br/>
    Python,C,C++  : ./Script/uninstall.bat
  ### LINUX:<br/>
    Python,C,C++  : ./Script/uninstall.sh
## Tools:<br/>
  ### Disassembler: 
  #### Tries to output assembly code from binary file. <br/>
    Author: Psideralis
    License: GNU GPL
    Versions: 0.0.01
  ### Decompiler: 
  #### Tries to output C or C++ code from binary file or assembly file. <br/>
    Author: Psideralis
    License: GNU GPL
    Versions: 0.0.01
  ### Disinterpreter: 
  #### Tries to output Python code from C++ file. <br/>
    Author: Psideralis
    License: GNU GPL
    Versions: 0.0.01