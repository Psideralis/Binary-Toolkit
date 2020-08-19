# Binary-Reader

Author: Psideralis<br/>
License: GNU GPL<br/>
Description: Reads any file and ouput to file its binary(octal,hex,ascii) dump.<br/>
Versions:<br/>
  Python  : bimdump.py  0.0.01<br/>
    Manual:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
  C++     : bindump++   0.0.01<br/>
    Manual:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
  C       : bindump     0.0.01<br/>
    Manual:
      Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u: output UTF-8 format. Can be used with -b, -o or -h.
Output file format:
  HEADER:
    Output filename: "Filename"
    Output filepath: "Filepath"
    Date: "Date of read"
    Time: "Time of read"
  BODY:
    "DATA IN COLUMNS" | "ASCII OR UTF-8 TABLE IF -a or -u"
  FOOTER:
    Read filename: "Filename"
    Read filepath: "Filepath"
    Date: "Date of read"
    Time: "Time of read"
    Data: "bits read" Bits, "bytes read" Bytes, "KB read" KB, "MB read" MB, "GB read" GB, "TB read" TB.
    Read time: "Read time"
    Speed: "Read speed"
    File format: "Tries to output file format"
Compilation:.<br/>
  WINDOWS:<br/>
    Python  : No compilation.<br/>
    C++     : nmake<br/>
    C       : nmake<br/>
  LINUX:<br/>
    Python  : No compilation.  0.0.01<br/>
    C++     : make<br/>
    C       : make<br/>
Installation:<br/>
  WINDOWS:  PATH="%HOME%/AppData/Bindump/"<br/>
    Python,C,C++  : ./Script/install.bat<br/>
  LINUX:    PATH="/usr/bin/Bindump"<br/>
    Python,C,C++  : ./Script/install.sh<br/>
Uninstallation:<br/>
  WINDOWS:<br/>
    Python,C,C++  : ./Script/uninstall.bat<br/>
  LINUX:<br/>
    Python,C,C++  : ./Script/uninstall.sh<br/>
Tools:<br/>
  Disassembler: Tries to output assembly code from binary file. <br/>
    Author: Psideralis<br/>
    License: GNU GPL<br/>
    Versions: 0.0.01<br/>
  Decompiler: Tries to output C or C++ code from binary file or assembly file. <br/>
    Author: Psideralis<br/>
    License: GNU GPL<br/>
    Versions: 0.0.01<br/>
  Disinterpreter: Tries to output Python code from C++ file. <br/>
    Author: Psideralis<br/>
    License: GNU GPL<br/>
    Versions: 0.0.01<br/>