# Binary-Toolkit
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
## Status:
UNFINISHED UNRELEASED
Public - Progress: 07%
## Version
00.00.000.001
## Description:
Binary Toolkit bases for Supressor a cross-platform (Windows,Linux,Android,MacOs,iOS) and cross-architecture (64, ARM) control monitor for a antimalware security conglomerated distributed heterogeneous network agency.

### Binary Reader
Reads any file and ouput to file its binary (octal,hex,ascii,utf-8,utf-16,utf-32,cct: custom code table) dump. Tries to output the format and the metadata of the file.

### Binary Ops
A binary toolkit for cybersecurity operations. Includes partially open development headers and object libraries, as well as a command with basic functions:  binop. binyect, bintrace.
#### Netcryptocompress
Network, cryptographic and compression server for binary ops, bases for XenoEngine: a cero knowledge enclosed cryptoengine. Uses Psideralis Math Utitilities and licensed commercial privative Psideralis code.

### Binary Control Room
A hex control GUI monitor and editor with binary reader and operations capabilities for conglomerated distributed heterogeneous network antimalware security agency administration.

For full results (HexMonitoriks: GUI for Supressor with integrated XenoEngine) with world map real time display for network administration of heterogeneous distributed cluster systems and graphical representations for data visualization, machine learning security predictions and postfactums (both offensive and defensive) and multiple features more (including custom cryptography a stenography with real time transactions monitoring and zero knowledge non-repudiatable operations), all included in commercial version contact Psideralis or the author.

## Manual
### Installation
    make install platform=["windows", "linux", "mac"]
    or
    Windows
        install.sh
        or 
    Linux or Mac:
        install.sh
### Uninstallation
    make uninstall platform=["windows", "linux", "mac"]
    or
    Windows
        uninstall.sh
        or 
    Linux or Mac:
        uninstall.sh

### Use
#### Binary Reader
    bindump [parameters] [options] [file]

    bindump++ [parameters] [options] [file]

    python pydump.py [parameters] [options] [file]

    Options:
        -audio: output an audio representation of the binary.
        -image: output an image representation of the binary.
        -video: output an video representation of the binary.
        -functional: output an funtional representation of the binary.
        -signal: output an signal representation of the binary.
    General Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path]

#### Dinary Ops
    binops [parameters] [options]

    Options:
        Cypher options:
            -executive: cypher binary load in executive.
            -audio: cypher binary load in audio.
            -image: cypher binary load in image.
            -video: cypher binary load in video.
        Binops options:
            -sub: substitution
            -inc: inclusion
            -exc: exclusion
    Parameters:
        -b: binary operator flag.
        -y: inyect binary load to file.
        -e: deyect binary load from file.
        -c: cypher binary load.
        -d: decypher binary load.
        -m: signed binary executive for tracing.
        -t: trace binary executive.

#### Control Room
    binctrl