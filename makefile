
ALL: build 

build:
ifeq ($(platform),LINUX)
	g++ -shared Library.cpp -o ./_Library/PsideralisMathUtilities.so  -I ./_Include/*/*
else ifeq ($(platform),WINDOWS)
	cl /c Library.cpp -I ./_Include/*/* /Fo:./_Library/PsideralisMathUtilities.o 
	link /dll /out:./_Library/PsideralisMathUtilities.dll ./_Library/*.obj
else ifeq ($(platform),MAC)
	g++ -shared Library.cpp -o ./_Library/PsideralisMathUtilities.so ./_Library/PsideralisMathUtilities.so -I ./*
else
	echo "NO PLATFORM."	
endif

lib MathLibrary.obj
cl /c /EHsc MathLibrary.cpp

static:
ifeq ($(platform),LINUX)
	ar rvs ./_Library/PsideralisMathUtilities.a ./_Library/PsideralisMathUtilities.o
else ifeq ($(platform),WINDOWS)
	cl /c Library.cpp.c -I ./_Include/*/* ./* /Fo:./_Library/PsideralisMathUtilities.o 
	link /dll /out:PsideralisMathUtilities.dll ./_Library/*.obj
else ifeq ($(platform),MAC)
	clang -I"./include/" -L"./lib/" 
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
