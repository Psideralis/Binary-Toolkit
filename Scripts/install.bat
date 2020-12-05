:: INSTALL BATCH
echo Installing
:: CREATE DIRECTORIES
md %HOME%\AppData/Local/Programs\Bindump
:: COPY FILES
copy ..\Bindumpp\bin %HOME%\AppData\LocalPrograms\Bindump
copy ..\Cdump\bin %HOME%\AppData\LocalPrograms\Bindump
copy ..\Pydump\bin %HOME%\AppData\LocalPrograms\Bindump
:: CONFIRM
where cdump
where bindumpp
where pydump
:: SET ENVIROMENT VARIABLES
set %PATH%="%HOME%\AppData\Local\Programs\Bindump\Cdump\bin"
set %PATH%="%HOME%\AppData\Local\Programs\Bindump\Bindumpp\bin"
set %PATH%="%HOME%\AppData\Local\Programs\Bindump\Pydump\bin"
:: TEST
