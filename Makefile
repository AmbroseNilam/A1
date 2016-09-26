all: main

main: src/main.c src/process.c src/ackermann.c src/carbon.c src/newton.c include/process.h include/ackermann.h include/carbon.h include/newton.h
	gcc -Wall -std=c99 src/process.c src/carbon.c src/main.c src/ackermann.c src/newton.c -Iinclude -o main