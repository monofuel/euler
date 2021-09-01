CC=gcc
CFLAGS=-pedantic -Wall -Werror -std=c99
CFLAGS+=-g
#CFLAGS+=-march=native
#CFLAGS+=-o2


all: a.out

a.out: main.c
	$(CC) $(CFLAGS) main.c

test: a.out
	valgrind --leak-check=full ./a.out
#	./a.out