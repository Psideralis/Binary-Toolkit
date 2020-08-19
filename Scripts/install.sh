#! /usr/bin
#INSTALL BATCH
echo Installing
#CREATE DIRECTORIES
mkdir /usr/bin/Bindump
#COPY FILES
copy . /usr/bin/Bindump
#CONFIRM
whereis bindump
whereis bindump++
whereis pydump
#SET ENVIROMENT VARIABLES
export PATH = /usr/bin/Bindump/Cdump/bin
export PATH = /usr/bin/Bindump/Bindump/bin
export PATH = /usr/bin/Bindump/Pydump/bin
#TEST
