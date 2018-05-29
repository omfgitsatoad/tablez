all: src/tablez.c
	mkdir bin
	gcc -o bin/tablez src/tablez.c
