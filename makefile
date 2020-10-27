all: main.o fruits.o
	gcc -o program main.o fruits.o
main.o: main.c fruits.h
	gcc -c main.c
fruits.o: fruits.c fruits.h
	gcc -c fruits.c
clean:
	-rm *.o
run:
	./program