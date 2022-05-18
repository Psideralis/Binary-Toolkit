#! /usr/bin
#INSTALL BATCH
echo "Innstalling in /urs/bin"
#COPY FILES
copy ../Bindumpp/bin /usr/bin
copy ../Cdumpp/bin /usr/bin
copy ../Pydumpp/bin /usr/bin
#CONFIRM
echo "Search for bindumpp"
whereis bindumpp
echo "Search for cdump"
whereis cdump
echo "Search for pyumpp"
whereis pydump
