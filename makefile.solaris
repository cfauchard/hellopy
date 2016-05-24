COMPILER=gcc
COMPILER_FLAGS=
LINKER=gcc
LIBS=hello.so

all: $(LIBS)

hello.so: hello.o
	$(COMPILER) $(COMPILER_FLAGS) -shared -o hello.so hello.o

hello.o: hello.c
	$(COMPILER) $(COMPILER_FLAGS) -c -Wall -fpic -o hello.o hello.c
	

clean: 
	rm -f *.o *.so
