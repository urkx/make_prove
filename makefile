list : main.o
	gcc -o list main.o

main.o: main.c lib.h
	gcc -c main.c

clean:
	rm list \
		main.o
