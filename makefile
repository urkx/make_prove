# makefile for list program
#
#

CC = g++
OBJECTS = main.o


main: $(OBJECTS)
	$(CC) -o list main.o

main.o: main.cpp lib.h
	$(CC) -c main.cpp
# make knows how to compile C files, 
# so we can write just:
#main.o: lib.h

debug: CC += -g
debug: main

.PHONY : clean 
clean:
	-rm list $(OBJECTS)
