#! /usr/bin
#INSTALL BATCH
echo Installing
#CREATE DIRECTORIES
mkdir /usr/bin/Bindump
#COPY FILES
copy ../Bindumpp/bin /usr/bin/Bindump
copy ../Cdumpp/bin /usr/bin/Bindump
copy ../Pydumpp/bin /usr/bin/Bindump
#CONFIRM
whereis bindumpp
whereis cdump
whereis pydump
#SET ENVIROMENT VARIABLES
export PATH = /usr/bin/Bindump/Cdump/bin
export PATH = /usr/bin/Bindump/Bindump/bin
export PATH = /usr/bin/Bindump/Pydump/bin
#TEST
