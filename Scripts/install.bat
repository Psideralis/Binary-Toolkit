:: INSTALL BATCH
echo "Installing in %HOME%"
:: CREATE DIRECTORIES
md %HOME%\BinaryReader\Cdump\bin
md %HOME%\BinaryReader\Bindumpp\bin
md %HOME%\BinaryReader\Pydump\bin
:: COPY FILES
copy ..\Bindumpp\bin  %HOME%\BinaryReader\Cdump\bin
copy ..\Cdump\bin  %HOME%\BinaryReader\Bindumpp\bin
copy ..\Pydump\bin %HOME%\BinaryReader\Pydump\bin
:: SET ENVIROMENT VARIABLES
set PATH=%PATH%;%HOME%\BinaryReader\Cdump\bin
set PATH=%PATH%;%HOME%\BinaryReader\Bindumpp\bin
set PATH=%PATH%;%HOME%\BinaryReader\Pydump\bin
:: CONFIRM
echo "Search for cdump"
where cdump
echo "Search for bindumpp"
where bindumpp
echo "Search for pydump"
where pydump