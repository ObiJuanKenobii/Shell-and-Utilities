all: Parser

Parser: main.o Parse.o
	gcc-5 main.o Parse.o -o Parser

main.o: main.c
	gcc-5 -c main.c -o main.o

Parse.o: Parse.c
	gcc-5 -c Parse.c -o Parse.o

clean:
	rm *o Parser
