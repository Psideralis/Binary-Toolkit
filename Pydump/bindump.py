#! /usr/bin/env python
# -*- coding: utf-8 -*-

__author__ = "Psideralis"
__copyright__ = "Copyright 2020, Psideralis"
__credits__ = ["Psideralis"]
__license__ = "GPL 3.0"
__version__ = " 00.00.000.001"
__maintainer__ = "Psideralis"
__email__ = "psideralis@gmail.com"
__status__ = "Development"

import sys

def bindump(filename):  
    counter = 0
    stream = []
    flow = []
    read = open(filename, "rb")
    dump = open(filename[:-4]+".dmp","w+")
    lines = read.readlines()
    for line in lines:
        for byte in line:
            stream += [(bin(byte))]
    for byte in stream:
        flow += [byte[2:]]
    stream = []           
    for byte in flow:
        if len(byte) != 8:
            if byte == '0':
                stream += ['00000000']
            else:
                stream += [byte.zfill(8)]
        else:
            stream += [byte]
    for byte in stream:
        counter += 1
        if counter == 8:
            dump.write(byte+'\n')
            counter = 0
        else:
            dump.write(byte+'\t')
        
    read.close()
    dump.close()

if __name__ == "__main__":
    rfile = sys.argv[1]
    bindump(rfile)

# ADD ASCII COLUMNS PARALLEL