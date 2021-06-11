	
ALL: BUILD RUN

BUILD:
	gcc cdump.c -I ./headers -o ./bin/cdump

RUN:
	./bin/cdump ./test/testfile.txt

CLEAN:
	rm ./bin/cdump