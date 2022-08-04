# Binary ControlRoom
## Author: 
Psideralis
## License: 
Psideralis Commune Public License
## Status:
Public - Progress: 5%
## Version
00.00.001.000
## Description:
A CLI (command line interface) monitor tool with binary reader and operations capabilities for antimalware security cluster conglomerated distributed heterogeneous network agency administration.

For full results (HexMonitoriks: GUI for Supressor with integrated XenoEngine) with world map real time display for network administration of cluster conglomerated distributed heterogeneous systems and graphical representations for data visualization, machine learning security predictions, prefactums, postdictions and postfactums (offensive, affensive, evasive and defensive) in seven levels of security and multiple features more (including custom cryptography, stenography with real time transactions monitoring and zero knowledge non-repudiatable certificated operations), all included in commercial version. Contact Psideralis for more information.

## Manual:  
----------
    binarypit [parameters] [options]

        or

    binpitclient [parameters] [options]

        By default it starts Binary Pit server (Windows, Linux, MacOS, [Android, iOS: requires Terminal]). Security service that monitor, reports and control ops the resources: organization, filesystem, process and network. Seven levels of defensive, evasive, affensive and offensive notifications and responses. Requires binary pit client (binpitclient) if remote, otherwise uses binary pit (binarypit). Uses configuration file: binpin.config. For manual of configuration file see: binarypit -config

    Options:
        - config,  -c:          configuration file manual
        - default, -d:          create and set default configuration file
        - reset,   -r:          reset configuration file manual
        - start                 start service
        - pause                 pause service
        - stop                  stop service
        - defense, -n [0-7]     set defense level
        - evaise,  -v [0-7]     set evasive level
        - affense, -a [0-7]     set affense level
        - offensive, -o [0-7]   set offensive level
        - run [script]          run script

        BINARY TOOLKIT
            - bindump [parameters] [options]               
            - xorgdiff [parameters] [options]
            - xorgcntrl [parameters] [options]
            - xfsdiff [parameters] [options]
            - xfscntrl [parameters] [options]
            - xprocdiff [parameters] [options]
            - xproccntrl [parameters] [options]
            - xnetdiff [parameters] [options]
            - xnetcntrl [parameters] [options]
            - binops [parameters] [options]
            - binyect [parameters] [options]
            - bintrace [parameters] [options]
            - xnetcrypto [parameters] [options] 
            - xnetcompress [parameters] [options]

    Parameters:

    Configuration File: binpit.config
    
        "(BinaryPitServer|BinPitClient)={
            "PSI_ID":"",
            "Identity":{
                "Constricture":"(name)|[(names)]",
                "Conglomerate":"(name)|[(names)]",
                "Organization":"(name)|[(names)]",
                "User":"(name)|[(names)]"
            },
            "Credentials":{
                "PrvKeys":[],
                "PubKeys":[],
                "Hashs":[],
                "Signatures":[],
                "Cetificates":[],
                "Keywords":[]
            },
            "Pit":{
                "Krypth":[],
                "Lock":[],
                "Archives":[],
                "Reports":{
                    "Records":[],
                    "Registry":[],
                    "Logs":[]
                }
            },
            "Local":{
                "Date":"",
                "Time":"",
                "Geo":"",
                "Device":"",
                "Architecture":"",
                "Platform":"",
                "MAC":"",
                "IP":"",
                "ISP":"",
                "Gateway":"",
                "Proxy":""
                "Reports_Stamp":""
                "Reports_Path":""
            },
            #IF(BinaryPitServer):
            "Clients":{
                "PSI_IDList":[]
            },
            #IF(BinPitClient):
            "Servers":{
                "PSI_IDList":[]
            }
        }"

----------
    xengine [parameters] [options]              Not included. Contact Psideralis for commercial version access.

    Options:
        - config,  -c:          configuration file manual
        - default, -d:          create and set default configuration file
        - reset,   -r:          reset configuration file manual
        - start                 start service
        - pause                 pause service
        - stop                  stop service
    Parameters:
        - runtime, -x:          execute engine program
        - transact, t:          supervised transaction
        - krypth, -k:           access and modified krypth
        - xhrypth, -y:          access and modified xhrypth

----------
    supressor [parameters] [options]            Not included. Contact Psideralis for commercial version access.

    Options:
        - config,  -c:          configuration file manual
        - default, -d:          create and set default configuration file
        - reset,   -r:          reset configuration file manual
        - start                 start service
        - pause                 pause service
        - stop                  stop service
        - defense, -n [0-7]     set defense level
        - evaise,  -v [0-7]     set evasive level
        - affense, -a [0-7]     set affense level
        - offensive, -o [0-7]   set offensive level
    Parameters:
        -x: run exploit 
            /def: run defensive exploit [exploit name] [parameters] [options] [delta]
            /ev:  run evasive exploit [exploit name] [parameters] [options] [gamma]
            /aff: run affensive exploit [exploit name] [parameters] [options] [lambda]
            /off: run offensive exploit [exploit name] [parameters] [options] [rho]

----------