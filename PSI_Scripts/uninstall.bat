:: UNINSTALL BATCH
echo "Unstalling from %HOME%"
:: REMOVE DIRECTORIES
rd \s %HOME%\BinaryReader
:: CONFIRM
echo " Confirmation search for cdump"
where cdump
echo " Confirmation search for bindumpp"
where bindumpp
echo " Confirmation search for pydump"
where pydump
