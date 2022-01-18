compilador=gcc
SOURCEFILES = $(wildcard *.c)
OBJECTS = $(SOURCEFILES: %.c=%.o)
main_execute = main.exe
.PHONY: all clean execute help

all: execute
execute : main.exe
	./main.exe

main.exe : $(OBJECTS)
	$(compilador) -o $@ $^ -lm -lg

%.o : %.c
	$(compilador) -c $<
help:
	./main.exe --help

clean :
	rm *.o
