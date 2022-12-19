
ALL: build 

build:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS)

else ifeq ($(platform),MAC)

else
	echo "NO PLATFORM."	
endif

static:
ifeq ($(platform),LINUX)

else ifeq ($(platform),WINDOWS

else ifeq ($(platform),MAC)

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
