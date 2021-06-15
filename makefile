
ALL: build 

build:
ifeq ($(platform),LINUX)
	@gcc $(file) $(file).cpp -I ./headers -o ./bin/$(file) 
else ifeq ($(platform),WINDOWS)
	@cl $(file) $(file).cpp /I ./headers /o ./bin/$(file) 
else ifeq ($(platform),MAC)
	@gcc $(file) $(file).cpp -I ./headers -o ./bin/$(file) 
else
	echo "NO PLATFORM."	
endif