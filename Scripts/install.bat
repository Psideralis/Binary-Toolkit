:: INSTALL BATCH
echo Installing
:: CREATE DIRECTORIES
md %HOME%/AppData/Bindump
:: COPY FILES
copy . %HOME%/AppData/Bindump
:: CONFIRM
where bindump
where bindump++
where pydump
:: SET ENVIROMENT VARIABLES
set %PATH%="%HOME%/AppData/Bindump/Bindump/Cdump/bin"
set %PATH%="%HOME%/AppData/Bindump/Bindump/Bindump/bin"
set %PATH%="%HOME%/AppData/Bindump/Bindump/Pydump/bin"
:: TEST
