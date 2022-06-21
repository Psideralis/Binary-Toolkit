
ALL: build 

build:
ifeq ($(platform),LINUX)
	@gcc $(file) $(file).cpp -I ./headers -o ./bin/$(file) 
else ifeq ($(platform),WINDOWS)
	@cl $(file) $(file).cpp /I ./headers /o ./bin/$(file) 
else ifeq ($(platform),MAC)
	@clang $(file) $(file).cpp -I ./headers -o ./bin/$(file) 
else
	echo "NO PLATFORM."	
endif

install:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
endif


uninstall:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."
endif
