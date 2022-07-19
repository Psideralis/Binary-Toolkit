/* *********************************************
Author: Psideralis
License: GNU GPL 3.0
File name: jsdump.js
Description:  A dump program with basic
    steneography.
********************************************* */ 

/* *********************************************
INCLUDES:
    fs
FUNCTIONS:
    audio()
    morse()
    image()
    video()
    curve()
    polynomial()
    polyhedra()
    wave()
    condensate()
    file()
    bin()
    oct()
    hex()
    ascii()
    utf8()
    utf16()
    utf32()
    custom()
MANUAL:

    jsdump  [parameters] [options] [f

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

var fs = require('fs')

function audio(params) {
    
}

function morse(params) {
    
}

function image(params) {
    
}

function video(params) {
    
}

function curve(params) {
    
}

function polynomial(params) {
    
}

function polyhedra(params) {
    
}

function wave(params) {
    
}

function condensate(params) {
    
}

function file(params) {
    
}

function binary(params) {
    
}

function octal(params) {
    
}

function hexadecimal(params) {
    
}

function ascii(params) {
    
}

function utf8(params) {
    
}

function utf16(params) {
    
}

function utf32(params) {
    
}

function custom(params) {
    
}

function main (){
    binary = fs.readFileSync('./binary')
}

main();

