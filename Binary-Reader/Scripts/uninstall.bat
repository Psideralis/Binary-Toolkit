:: UNINSTALL BATCH
echo Uninstalling
:: REMOVE ENVIROMENT VARIABLES
set %PATH%="%HOME%\AppData\LocalPrograms\Bindump\Cdump\bin"
set %PATH%="%HOME%\AppData\LocalPrograms\Bindump\Bindumpp\bin"
set %PATH%="%HOME%\AppData\LocalPrograms\Bindump\Pydump\bin"
:: REMOVE DIRECTORIES
rd %HOME%\AppData\LocalPrograms\Bindump
:: CONFIRM
where bindump
where bindump++
where pydump
:: TEST