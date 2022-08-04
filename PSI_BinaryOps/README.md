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

    python pyxnetcrypto [parameters] [options]

    sharpxnetcrypto [parameters] [options]
    
    jsxnetcrypto [parameters] [options]

    Options:
        -c: cyphet/decypher the file
        -p: create or verify public key
        -v: create of verify private key
        -g: create or verify signature
        -c: create of verify certificate transaction
        -n: cypher the network output
        -d: decypher try all
            - di:   decypher try inmutable
            - dm:   decypher try mutable
            - dt:   decypher try transmutable
    Parameters:
        -r: programm autoremove

    xnetcompress [parameters] [options]

    python pyxnetcompress  [parameters] [options]

    sharpxnetcompres [parameters] [options]

    jsxnetcompress [parameters] [options]

    Options:
        -   
    Parameters:
        -