default: prog

structure.o: structure.c structure.h
	gcc -Wall -ansi -c structure.c

algorithm_one.o: algorithm_one.c algorithm_one.h
	gcc -Wall -ansi -c algorithm_one.c

algorithm_two.o: algorithm_two.c algorithm_two.h
	gcc -Wall -ansi -c algorithm_two.c

algorithm_three.o: algorithm_three.c algorithm_three.h
		gcc -Wall -ansi -c algorithm_three.c

prog: structure.o algorithm_one.o algorithm_two.o algorithm_three.o main.c
	gcc -Wall -ansi -o prog structure.o algorithm_one.o algorithm_two.o algorithm_three.o main.c

clean:
	rm structure.o

cleanall: clean
	rm prog
