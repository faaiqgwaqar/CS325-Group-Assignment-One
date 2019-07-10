default: prog

structure.o: structure.c structure.h
	gcc -Wall -ansi -c structure.c

prog: structure.o main.c
	gcc -Wall -ansi -o prog structure.o main.c

clean:
	rm structure.o

cleanall: clean
	rm prog
