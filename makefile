ALL: $(task)

BUILD_WIN: 
	@cl $(file) $(file).cpp /I ./headers /o ./bin/$(file) 

BUILD_LINUX: 
	@gcc $(file) $(file).cpp -I ./headers -o ./bin/$(file) 

RUN_WIN:
	./bin/$(file)

RUN_LINUX:
	./bin/$(file)

CLEAN_WIN: 
	@del $(file).exe $(file).obj

CLEAN_LINUX: 
	@rm $(file).exe 