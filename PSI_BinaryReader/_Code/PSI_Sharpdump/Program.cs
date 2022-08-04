/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: Program.cs
Description:  A dump program with basic
    steneography.
********************************************* */ 

/* *********************************************
INCLUDES:
    System
    System.IO
NAMESPACE:
    PSI_SharpDump
CLASS:
    SharpDump
MANUAL:

    sharpdump  [parameters] [options] [file]

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
        -f [filename]: output dump file.
        -b: output binary format.
        -o: output octal format.
        -h: ouptut hexadecimal format.
        -a: output ASCII format. Can be used with -b, -o or -h.
        -u8: output UTF-8 format. Can be used with -b, -o or -h.
        -u16: output UTF-16 format. Can be used with -b, -o or -h.
        -u32: output UTF-32 format. Can be used with -b, -o or -h.
        -cct: output a custom code table format. Can be used with -b, -o or -h. Requires parameter: -cct_file [File path] (See CCT File Format below)

********************************************* */ 

using System;
using System.IO;

namespace PSI_SharpDump{
    class ShardDump{
        private void audio(){

        }
        private void morse(){

        }
        private void image(){

        }
        private void video(){

        }
        private void curve(){

        }
        private void polynomial(){

        }
        private void polyhedra(){

        }
        private void wave(){

        }
        private void condensate(){

        }
        private void file(){

        }
        private void bin(string file){
            byte[] mybuffer = File.ReadAllBytes(file);
            for (int i = 1; i < mybuffer.Length; i++)
            {
                if(i%8==0){
                    Console.Write(Convert.ToString(mybuffer[i],16).PadLeft(8,'0')+"\n");
                }else{
                    Console.Write(Convert.ToString(mybuffer[i],16).PadLeft(8,'0')+":");
                }
            }
        }
        private void oct(string file){
            byte[] mybuffer = File.ReadAllBytes(file);
            for (int i = 1; i < mybuffer.Length; i++)
            {
                if(i%8==0){
                    Console.Write(Convert.ToString(mybuffer[i],8).PadLeft(4,'0')+"\n");
                }else{
                    Console.Write(Convert.ToString(mybuffer[i],8).PadLeft(4,'0')+":");
                }
            }
        }
        private void hex(string file){
            byte[] mybuffer = File.ReadAllBytes(file);
            for (int i = 1; i < mybuffer.Length; i++)
            {
                if(i%8==0){
                    Console.Write(Convert.ToString(mybuffer[i],16).PadLeft(2,'0')+"\n");
                }else{
                    Console.Write(Convert.ToString(mybuffer[i],16).PadLeft(2,'0')+":");
                }
            }
        }
        private void utf8(){

        }
        private void utf16(){

        }
        private void utf32(){

        }
        private void custom(){

        }
        
        public static void Main(string[] args){
            byte[] mybuffer = File.ReadAllBytes(args[0]);

        }
    }
}