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
----------
    bindump [parameters] [options] [file]

    bindump++ [parameters] [options] [file]

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