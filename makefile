# makefile for list program
#
#

CC = gcc
OBJECTS = main.o

main: $(OBJECTS)
	$(CC) -o list main.o

# main.o: main.c lib.h
#	$(CC) -c main.c
# make knows how to compile C files, 
# so we can write just:
main.o: lib.h

.PHONY : clean 
clean:
	-rm list $(OBJECTS)
