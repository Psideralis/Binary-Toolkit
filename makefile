ALL: BUILD

BUILD:
	ifeq ($(sys), "-linux")
		BUILD_WIN RUN_WIN CLEAN_WIN
	else ifeq ($(sys), "-win")
		BUILD RUN CLEAN
	else ifeq ($(sys), "-mac")
		BUILD RUN CLEAN
	else
		echo "No platform selected."
	endif

BUILD_WIN: 
	@cl ./$(directory$(source) /I ./$(directory/headers /o ./$(directory/bin/$(exec) 

BUILD: 
	@gcc ./$(directory$(source) -I ./$(directory/headers -o ./$(directory/bin/$(exec) 

RUN_WIN:
	./$(directory)/bin/$(exec).exe $(file) $(parameters)

RUN:
	./$(directory/bin/$(exec)  $(file) $(parameters)

CLEAN_WIN: 
	@del $$(exec).exe (exec).obj

CLEAN: 
	@rm $$(exec)

INSTALL:
	ifeq ($(sys), "-linux")
		INSTALL_WIN
	else ifeq ($(sys), "-win")
		INSTALL_LINUX
	else
		echo "No platform selected."
	endif

INSTALL_WIN:

INSTALL_LINUX:

INSTALL_MAC:

UNINSTALL:
	ifeq ($(sys), "-linux")
		UNINSTALL_WIN
	else ifeq ($(sys), "-win")
		UNINSTALL_LINUX
	else ifeq ($(sys), "-mac")
		UNINSTALL_MAC
	else
		echo "No platform selected."
	endif

UNINSTALL_WIN:

UNINSTALL_LINUX:

UNINSTALL_MAC: