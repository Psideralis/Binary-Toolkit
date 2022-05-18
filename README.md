# Binary-Toolkit
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
## Status:
UNFINISHED UNRELEASED
Public - Progress: 10%
## Version
00.00.000.001
## Description:
Binary Toolkit bases for Supressor a cross-platform (Windows,Linux,Android,MacOs,iOS) and cross-architecture (x84, amd64, ARM) control monitor for a antimalware security conglomerated distributed heterogeneous network agency.

### Binary Reader
Reads any file and ouput to file its binary (octal,hex,ascii,utf-8,utf-16,utf-32,cct: custom code table) dump. Tries to output the format and the metadata of the file.

### Binary Ops
A binary toolkit for cybersecurity operations. Includes partially open development headers and shared libraries, as well as a command with basic functions:  binop. binyect, bintrace.
#### Netcryptocompress
Network, cryptographic and compression server for binary ops, bases for XenoEngine: a zero knowledge enclosed cryptoengine. Uses Psideralis Math Utitilities and licensed commercial privative Psideralis code.

### Binary Pit
A hex control GUI monitor and editor with binary reader and operations capabilities for k antimalware security conglomerated distributed heterogeneous network agency administration.

For full results (HexMonitoriks: GUI for Supressor with integrated XenoEngine) with world map real time display for network administration of conglomerated distributed heterogeneous cluster systems and graphical representations for data visualization, machine learning security predictions and postfactums (both offensive and defensive) and multiple features more (including custom cryptography, stenography with real time transactions monitoring and zero knowledge non-repudiatable operations), all included in commercial version. Contact Psideralis for more information.

## Manual
### Installation
    make build platform=("windows" or "linux" or "mac") architecture=("amd64" or "x86" or "arm")
    make install platform=("windows" or "linux" or "mac") architecture=("amd64" or "x86" or "arm")
    make uninstall platform=("windows" or "linux" or "mac") architecture=("amd64" or "x86" or "arm")

    or

    cd Scripts
    Windows (A command line menu will be displayed for options selection):
        Installation:   install.bat or install.ps1
    Linux or Mac (A command line menu will be displayed for options selection):
        Installation:   install.sh
### Uninstallation
    make uninstall platform=("windows" or "linux" or "mac") architecture=("amd64" or "x86" or "arm")
    
    or

    cd PSI_Scripts
    Windows (A command line menu will be displayed for options selection):
        Uninstallation: uninstall.bat o uninstall.ps1
    Linux or Mac (A command line menu will be displayed for options selection):
        Uninstallation: uninstall.sh

### Use
#### Binary Reader
    bindump [parameters] [options] [file]

    bindump++ [parameters] [options] [file]

    python pydump.py [parameters] [options] [file]

    sharpdump  [parameters] [options] [file]

    jsdump  [parameters] [options] [file]

    Options:
        -audio: output an audio representation of the binary.
        -morse: output an morse code representation of the binary.
        -image: output an image representation of the binary.
        -video: output an video representation of the binary.
        -curve: output an curve representation of the binary.
        -polgrad: output a polygon gradient representation of the binary.
        -plygrad: output a polyhedron gradient representation of the binary.
        -wave: output an wave representation of the binary.
        -condensate: output an condensate representation of the binary.
    General Parameters:
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path] (See CCT File Format below)

#### Dinary Ops

    xfsdiff  [parameters] [options]
        Creates a backup of the file system, if already exist creates a diff file.

    xfscntrl  [parameters] [options]
        Control options for file management.

    xprocdiff  [parameters] [options]
        Creates a backup of the process system, if already exist creates a diff file.

    xproccntrl  [parameters] [options]
        Control options for process management.

    xnetdiff  [parameters] [options]
        Creates a backup of the network system, if already exist creates a diff file.

    xnetcntrl  [parameters] [options]
        Control options for network management.

    binops [parameters] [options]

    sharpbinops [parameters] [options]

    Options:
        Cypher options:
            -executive: cypher binary load in executive.
            -audio: cypher binary load in audio.
            -audio: cypher binary load in morse code.
            -image: cypher binary load in image.
            -video: cypher binary load in video.
            -curve: cypher binary load in curve .
            -polgrad: cypher binary load in polygon gradient.
            -plygrad: cypher binary load in polyhedron gradient.
            -wave: cypher binary load in wave.
            -condensate: cypher binary load in condensate.
        Binops options:
            -sub: substitution
            -inc: inclusion
            -exc: exclusion
            -per: permutation
    Parameters:
        -b: binary operator flag.
        -y: inyect binary load to file.
        -e: deyect binary load from file.
        -c: cypher binary load.
        -d: decypher binary load.
        -m: signed binary executive for tracing.
        -t: trace binary executive
        -p: create public key
        -v: create private key
        -r: create signed certificate
        -s: create signature
        -k: create master key
        -l: create cipher vault
        -h: decypher vault vault

#### Binary Pit
    binpit [parameters] [options]
        By default it opens Binary Pit CLI (Windows, Linux, MacOS, [Android, iOS: requires Shell]).

    Options:

    Parameters:
        -c:   command mode
