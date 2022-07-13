
ALL: build 

build:
ifeq ($(platform),LINUX)
	g++ -shared 
else ifeq ($(platform),WINDOWS)
	cl /c 
	link /dll
else ifeq ($(platform),MAC)
	g++ -shared 
else
	echo "NO PLATFORM."	
endif

static:
ifeq ($(platform),LINUX)
	ar rvs 
else ifeq ($(platform),WINDOWS)
	cl /c 
	link /dll 
else ifeq ($(platform),MAC)
	clang
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
