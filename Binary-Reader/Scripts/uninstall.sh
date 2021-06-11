#! /usr/bin
#UNINSTALL BATCH
echo "Uninstalling from /urs/bin"
#REMOVE DIRECTORIES
rm /usr/bin/bindumpp
rm /usr/bin/cdump
rm /usr/bin/pydump
:: CONFIRM
echo "Search for bindumpp"
whereis bindumpp
echo "Search for cdump"
whereis cdump
echo "Search for pyumpp"
whereis pydump