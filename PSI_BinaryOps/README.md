# Binary Ops
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
## Status:
Public - Progress: 15%
## Version
00.00.001.000
## Description:
A binary toolkit for cybersecurity operations. Includes partially open development headers and object libraries, as well as a command with basic functions: xorgdiff, xorgcntrl, xfsdiff, xfscntrl, xprocdiff, xproccntrl, xnetdiff, xnetcntrl, binop. binyect, bintrace.
## Manual:    
----------
    xorgdiff  [parameters] [options]
        Creates a backup of the organization system, if already exist creates a diff file.

    Options:
        -:
    Parameters:
        -:

    xorgcntrl  [parameters] [options]
        Control options for organization management.

    Options:
        -x: expose information of time, space and organization of a thread organization
    Parameters:
        - 
        - 
        - 
----------
    xfsdiff  [parameters] [options]
        Creates a backup of the file system, if already exist creates a diff file.

    Options:
        -b: creates backup file of fylesystem
        -d: creates diff file between back up files
        -s: creates a diff of a specific file
        -z: creates diff file between a specific file and a beck up file
    Parameters:
        -e: exhaustive backup file or diff
        -m: medium backup file or diff
        -i: minimun back up file or diff
        -n:[.bkp,.bkp]: list the backup files or path 

    xfscntrl  [parameters] [options]
        Control options for file management.

    Options:
        -x: expose information of time, space and organization of a thread file
        -:
        -:
        -:
    Parameters:
        -:
        -:
        -:
        -:
----------
    xprocdiff  [parameters] [options]
        Creates a backup of the process system, if already exist creates a diff file.

    Options:
        -
    Parameters:
        -

    xproccntrl  [parameters] [options]
        Control options for process management.

    Options:
        -x: expose information of time, space and organization of a thread process
    Parameters:
        -
----------
    xnetdiff  [parameters] [options]
        Creates a backup of the network system, if already exist creates a diff file.

    Options:
        -x: expose information of time, space and organization of a thread network socket

    Parameters:
        -

    xnetcntrl  [parameters] [options]
        Control options for network management. Included firewall, proxy and gateway configuration, private network and network architecture security management. For defensive and offensive exploits contact Psideralis for commercial version.

    Options:
        - 
    
    Parameters:
        -
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
----------
    binyect [parameters] [options]

    sharpbinyect [parameters] [options]

    Options:
        -
    Parameters:
        -
----------
    bintrace [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -
    Parameters:
        - 
----------
    xnetcrypto [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -
    Parameters:
        - 

    xnetcompress [parameters] [options]

    sharpbintrace [parameters] [options]

    Options:
        -
    Parameters:
        -