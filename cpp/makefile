#Link flags
LFLAGS = -Wall
#Compile flags
CFLAGS = -c -Wall -std=c++14 -g -O0 -pedantic-errors
CC = g++

run: all
	echo "running..."
	./test
	make clean

all: test

test: test.o atbash.o rot.o morse.o
	$(CC) $(LFLAGS) test.o atbash.o rot.o morse.o -o test

test.o: test.cpp ciphers.h
	$(CC) $(CFLAGS) test.cpp

atbash.o: atbash.cpp
	$(CC) $(CFLAGS) atbash.cpp

rot.o: rot.cpp
	$(CC) $(CFLAGS) rot.cpp

morse.o: morse.cpp
	$(CC) $(CFLAGS) morse.cpp

clean:
	rm -f test
	rm -f *.o
