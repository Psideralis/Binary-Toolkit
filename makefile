ALL: $(task)

BUILD_WIN: 
	@cl ./$(directory$(file).cpp /I ./$(directory/headers /o ./$(directory/bin/$(file) 

BUILD_LINUX: 
	@gcc ./$(directory$(file).cpp -I ./$(directory/headers -o ./$(directory/bin/$(file) 

RUN_WIN:
	./$(directory)/bin/$(file)

RUN_LINUX:
	./$(directory/bin/$(file)

CLEAN_WIN: 
	@del $(file).exe $(file).obj

CLEAN_LINUX: 
	@rm $(file).exe 