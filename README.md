# Binary-Toolkit
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
## Status:
UNFINISHED UNRELEASED
Public - Progress: 25%
## Version
00.00.001.001
## Description:
Binary Toolkit bases for Supressor a cross-platform (Windows,Linux,Android,MacOs,iOS) and cross-architecture (x84, amd64, ARM, MIPS, POWER, RISC-V) control monitor for a antimalware security cluster conglomerated distributed heterogeneous network agency.

### Binary Reader
Reads any file and ouput to file its binary (octal,hex,ascii,utf-8,utf-16,utf-32,cct: custom code table) dump. Tries to output the format and the metadata of the file.

### Binary Ops
A binary toolkit for cybersecurity operations. Includes partially open development headers and object libraries, as well as a command with basic functions: xorgdiff, xorgcntrl, xfsdiff, xfscntrl, xprocdiff, xproccntrl, xnetdiff, xnetcntrl, binop, binyect, bintrace.

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
----------
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

----------
    xorgdiff  [parameters] [options]
        Creates a backup of the organization system, if already exist creates a diff file.

    Options:
        -b: creates backup file of the organization system
        -d: creates diff file between back up files
        -s: creates a diff of a specific file
        -z: creates diff file between a specific file and a back up file
        -r: programm autoremove
    Parameters:
        -e: exhaustive backup file or diff
        -m: medium backup file or diff
        -i: minimun back up file or diff
        -n:[.bkp,.bkp]: list the backup files or path 

    xorgcntrl  [parameters] [options]
        Control options for organization management.

    Options:
        -x: expose information of time, space and organization of a organization thread 
        -a: modify the permissions of the organization system
        -c: modify the credentials of the organization system
        -g: exposes the log and records of the organization system
        -r: programm autoremove
    Parameters:
        -f: modify the permissions of a specific file or entity 
        -e: modify the credentials of a specific entity 
        -i: verify the diff hash of a organization diff
        -h: expose the log and record
----------
    xfsdiff  [parameters] [options]
        Creates a backup of the file system, if already exist creates a diff file.

    Options:
        -b: creates backup file of fyle system
        -d: creates diff file between back up files
        -s: creates a diff of a specific file
        -z: creates diff file between a specific file and a back up file
        -r: programm autoremove
    Parameters:
        -e: exhaustive backup file or diff
        -m: medium backup file or diff
        -i: minimun back up file or diff
        -n:[.bkp,.bkp]: list the backup files or path 

    xfscntrl  [parameters] [options]
        Control options for file management.

    Options:
        -x: expose information of time, space and organization of a file thread 
        -a: expose the organization system associated to a specific file
        -c: expose the process system associated to a specific file
        -n: expose the network system associated to a specific file
        -g: expose the file metadata
        -r: programm autoremove
    Parameters:
        -f: verify the diff hash of a filesystem diff
        -h: expose the log and record
----------
    xprocdiff  [parameters] [options]
        Creates a backup of the process system, if already exist creates a diff file.

    Options:
        -b: creates backup file of process system
        -d: creates diff file between back up files
        -s: creates a diff of a specific file
        -z: creates diff file between a specific file and a back up file
        -r: programm autoremove
    Parameters:
        -e: exhaustive backup file or diff
        -m: medium backup file or diff
        -i: minimun back up file or diff
        -n:[.bkp,.bkp]: list the backup files or path

    xproccntrl  [parameters] [options]
        Control options for process management.

    Options:
        -x: expose information of time, space and organization of a process and services thread
        -a: expose the process and services threads and modules
        -c: expose the libraries associated with the threads and their export modules
        -g: verify the network system associated to a specific process and service
        -r: programm autoremove
    Parameters:
        -f: verify the diff hash of a process diff
        -e: expose the log and record
----------
    xnetdiff  [parameters] [options]
        Creates a backup of the network system, if already exist creates a diff file.

    Options:
        -x: expose information of time, space and organization of a thread network socket
        -b: creates backup file of process system
        -d: creates diff file between back up files
        -s: creates a diff of a specific file
        -z: creates diff file between a specific file and a back up file
        -r: programm autoremove
    Parameters:
        -e: exhaustive backup file or diff
        -m: medium backup file or diff
        -i: minimun back up file or diff
        -n:[.bkp,.bkp]: list the backup files or path

    xnetcntrl  [parameters] [options]
        Control options for network management. Included firewall, proxy and gateway configuration, private network and network architecture security management. For defensive and offensive exploits contact Psideralis for commercial version.

     Options:
        -x: expose information of time, space and organization of a network thread
        -a: expose the network ports and socket information
        -g: expose the id and geolocalization of a incoming
        -i: expose the purpose of a incoming
        -c: expose the processes associated with the network and their ports and sockets
        -g: verify the credentials system associated to a specific network
        -r: programm autoremove
    Parameters:
        -f: verify the diff hash of a network system diff
        -e: expose the network log and records
----------
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
        -r: programm autoremove
----------
    binyect [parameters] [options]

    sharpbinyect [parameters] [options]

    Options:
        -i: inyect/deyect load to a binary
        -x: inyect/deyect load to a executive
        -f: inyect/deyect load to a file
        -p: inyect/deyect load to a process
        -n: inyect/deyect load to a network
    Parameters:
        -r: programm autoremove
----------
    bintrace [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -i: trace the process data
        -s: trace the process stack
        -o: trace the process organization
        -f: trace the process file
        -v: trace the process services
        -m: trace the process modules
        -n: trace the process network
    Parameters:
        -d: modify in runtime
        -e: cypher interprocess communication
        -x: cypher network communication
        -r: programm autoremove
----------
    xnetcrypto [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -c: cyphet/decypher the file
        -p: create or verify public key
        -v: create of verify private key
        -g: create or verify signature
        -c: create of verify certificate transaction
        -n: cypher the network output
    Parameters:
        -s: select the encryptation mode
            -RSA
            -El Gamal
        -r: programm autoremove

    xnetcompress [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -c: compress the file
    Parameters:
        -s: select the compress mode
            -Lossless:

            -Loss:
        -r: programm autoremove

#### Binary Pit
----------
    binarypit [parameters] [options]

        or

    binpitclnt [parameters] [options]

        By default it starts Binary Pit server (Windows, Linux, MacOS, [Android, iOS: requires Terminal]). Security service that monitor, reports and control ops the resources: organization, filesystem, process and network. Seven levels of defensive, evasive, affensive and offensive notifications and responses. Requires binary pit client (binpinclnt) if remote, otherwise uses binary pit (binarypit). Uses configuration file: binpin.config. For manual of configuration file see: binarypit -config

    Options:
        -config, -c:    configuration file manual
        -start, -s:     start service
        -pause, -p:     pause service
        -stop, -t:      stop service

    Parameters:
        -l: levels
            /def: defensive [0,7]
            /ev:  evasive [0,7]
            /aff: affensive [0,7]
            /off: offensive [0,7]
        -m: monitor overall operations
            /min:   minimum notification
            /std:   standard notification
            /full:  full notification
            /v:     verbose 
        -p: report overall operations
        -c: control overall operations
        -o: operation in server
        -c: operation in client
        -n: operation in nodes
        -r: programm autoremove
----------
    xengine [parameters] [options] Not included. Contact Psideralis for commercial version access.

    Options:
        -config, -c:    configuration file manual
        -start, -s:     start service
        -pause, -p:     pause service
        -stop, -t:      stop service

    Parameters:
        -x: run encrypted executive
        -t: supervised transaction
----------
    supressor [parameters] [options] Not included. Contact Psideralis for commercial version access.

    Options:
        -config, -c:    configuration file manual
        -start, -s:     start service
        -pause, -p:     pause service
        -stop, -t:      stop service
        -l: levels
            /def: defensive [0,7]
            /ev:  evasie [0,7]
            /aff: affensive [0,7] 
            /off: offensive [0,7]
    Parameters:
        -x: run exploit 
            /def: run defensive exploit [exploit name] [parameters] [options]
            /ev:  run evasive exploit [exploit name] [parameters] [options]
            /aff: run affensive exploit [exploit name] [parameters] [options]
            /off: run offensive exploit [exploit name] [parameters] [options]

    Exploits: {Comming soon}
        -System exploits
            - Regulars:
                -
            - IA energized:
                -
        -Organization exploits
            - Regulars:
                -
            - IA energized:
                -
        -File exploits
            - Regulars:
                -
            - IA energized:
                -
        -Process exploits
            - Regulars:
                -
            - IA energized:
                -
        -Network exploits
            - Regulars:
                -
            - IA energized:
                -
        -Device exploits
            - Regulars:
                -
            - IA energized:
                -
        -Network device exploits
            - Regulars:
                -
            - IA energized:
                -
        -Web exploits
            - Regulars:
                -
            - IA energized:
                -
        -Mobile exploits
            - Regulars:
                -
            - IA energized:
                -
        -Communication exploits
            - Regulars:
                -
            - IA energized:
                -
        -Embedded exploits
            - Regulars:
                -
            - IA energized:
                -
        -Social exploits
            - Regulars:
                -
            - IA energized:
                -