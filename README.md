# Binary-Toolkit
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
## Status:
UNFINISHED UNRELEASED
Public - Progress: 25%
## Version
00.00.001.000
## Description:
Binary Toolkit bases for Supressor a cross-platform (Windows,Linux,Android,MacOs,iOS) and cross-architecture (x84, amd64, ARM, MIPS, POWER, RISC) control monitor for a antimalware security cluster conglomerated distributed heterogeneous network agency.

### Binary Reader
Reads any file and ouput to file its binary (octal,hex,ascii,utf-8,utf-16,utf-32,cct: custom code table) dump. Tries to output the format and the metadata of the file.

### Binary Ops
A binary toolkit for cybersecurity operations. Includes partially open development headers and shared libraries, as well as a command with basic functions:  binop. binyect, bintrace. Diff and control executives for organizacional, file, process and network systems.

#### Netcryptocompress
Cryptographic and compression network server for binary ops, bases for XenoEngine: a zero knowledge enclosed cryptoengine. Uses Psideralis Math Utitilities and licensed commercial privative Psideralis code.

### Binary Pit
A CLI (command line interface) monitor tool with binary reader and operations capabilities for antimalware security cluster conglomerated distributed heterogeneous network agency administration.

For full results (HexMonitoriks: GUI for Supressor with integrated XenoEngine) with world map real time display for network administration of cluster conglomerated distributed heterogeneous systems and graphical representations for data visualization, machine learning security predictions, prefactums, postdictions and postfactums (offensive, affensive, evasive and defensive) in seven levels of security and multiple features more (including custom cryptography, stenography with real time transactions monitoring and zero knowledge non-repudiatable certificated operations), all included in commercial version. Contact Psideralis for more information.

## Manual
### Installation
    cd binary-toolkit
    make build
    make install platform=("windows" or "linux" or "mac") architecture=("amd64" or "x86" or "arm")

    or

    cd Scripts
    Windows (A command line menu will be displayed for options selection):
        Installation:   install.bat or install.ps1
    Linux or Mac (A command line menu will be displayed for options selection):
        Installation:   install.sh

### Uninstallation
    cd binary-toolkit
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

#### Binary Ops

    xorgdiff  [parameters] [options]
        Creates a backup of the organization system, if already exist creates a diff file.

    Options:
        -
    Parameters:
        -

    xorgcntrl  [parameters] [options]
        Control options for organization management.

    Options:
        -
    Parameters:
        - 
        - 
    xfsdiff  [parameters] [options]
        Creates a backup of the file system, if already exist creates a diff file.

    Options:
        -
    Parameters:
        -

    xfscntrl  [parameters] [options]
        Control options for file management.

    Options:
        -
    Parameters:
        -

    xprocdiff  [parameters] [options]
        Creates a backup of the process system, if already exist creates a diff file.

    Options:
        -
    Parameters:
        -

    xproccntrl  [parameters] [options]
        Control options for process management.

    Options:
        -
    Parameters:
        -

    xnetdiff  [parameters] [options]
        Creates a backup of the network system, if already exist creates a diff file.

    Options:
        -

    Parameters:
        -

    xnetcntrl  [parameters] [options]
        Control options for network management. Included firewall, proxy and gateway configuration, private network and network architecture security management. For defensive and offensive exploits contact Psideralis for commercial version.

    Options:
        - 
    
    Parameters:
        -

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

    binyect [parameters] [options]

    sharpbinyect [parameters] [options]

    Options:
        -
    Parameters:
        -

    bintrace [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -
    Parameters:
        -

#### Binary Pit
    binarypit [parameters] [options]

        or

    binpitclnt [parameters] [options]

        By default it starts Binary Pit server (Windows, Linux, MacOS, [Android, iOS: requires Terminal]). Security service that monitor, reports and control ops the resources: organization, filesystem, process and network. Seven levels of defensive, evasive, affensive and offensive notifications and responses. Requires binary pit client (binpinclnt) if remote, otherwise uses binary pit (binarypit). Uses configuration file: binpin.config. For manual of configuration file see: binarypit -config

    Options:
        -config, -c:    configuration file manual
        -cli, -l:       command mode

    Parameters: