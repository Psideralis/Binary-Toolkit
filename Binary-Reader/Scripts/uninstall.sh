#! /usr/bin
#UNINSTALL BATCH
echo Uninstalling
#REMOVE ENVIROMENT VARIABLES
export PATH = /usr/bin/Bindump/Cdump/bin
export PATH = /usr/bin/Bindump/Bindump/bin
export PATH = /usr/bin/Bindump/Pydump/bin
#REMOVE DIRECTORIES
rm -R /usr/bin/Bindump
#CONFIRM
whereis bindump
whereis bindump++
whereis pydump
#TEST

