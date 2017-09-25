#Link flags
LFLAGS = -Wall
#Compile flags
CFLAGS = -c -Wall -std=c++14 -g -O0 -pedantic-errors
CC = g++

all: test

test: test.o atbash.o
	$(CC) $(LFLAGS) test.o atbash.o -o test

test.o: test.cpp ciphers.h
	$(CC) $(CFLAGS) test.cpp

atbash.o: atbash.cpp
	$(CC) $(CFLAGS) atbash.cpp

clean:
	rm -f test
	rm -f *.o
