	
ALL: BUILD_LINUX RUN_LINUX

BUILD_WIN: 
	@cl ./cdump.c /I ./headers /o ./bin/cdump.exe

BUILD_LINUX: 
	@gcc ./cdump.c -I ./headers -o ./bin/cdump

RUN_WIN:
	./bin/cdump.exe $(file) $(parameters)

RUN_LINUX:
	./bin/cdump $(file) $(parameters)

CLEAN_WIN: 
	@del cdump.exe cdump.obj

CLEAN_LINUX: 
	@rm cdump

INSTALL_WIN:


INSTALL_LINUX:


UNINSTALL_WIN:


UNINSTALL_LINUX:

