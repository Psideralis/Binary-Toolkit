:: UNINSTALL BATCH
echo Uninstalling
:: REMVOE ENVIROMENT VARIABLES
set %PATH%="%HOME%/AppData/Bindump/Bindump/Cdump/bin"
set %PATH%="%HOME%/AppData/Bindump/Bindump/Bindump/bin"
set %PATH%="%HOME%/AppData/Bindump/Bindump/Pydump/bin"
:: REMOVE DIRECTORIES
rd %HOME%/AppData/Bindump
#CONFIRM
where bindump
where bindump++
where pydump
:: TEST