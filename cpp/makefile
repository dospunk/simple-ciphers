#Link flags
LFLAGS = -Wall
#Compile flags
CFLAGS = -c -Wall -std=c++14 -g -O0 -pedantic-errors
CC = g++

run: all
	echo "running..."
	./test

all: test

test: test.o utils.o atbash.o rot.o morse.o keyword.o
	$(CC) $(LFLAGS) test.o utils.o atbash.o rot.o morse.o keyword.o -o test

test.o: test.cpp ciphers.h utils.h
	$(CC) $(CFLAGS) test.cpp

utils.o: utils.cpp
	$(CC) $(CFLAGS) utils.cpp

atbash.o: atbash.cpp
	$(CC) $(CFLAGS) atbash.cpp

rot.o: rot.cpp
	$(CC) $(CFLAGS) rot.cpp

morse.o: morse.cpp
	$(CC) $(CFLAGS) morse.cpp

keyword.o: keyword.cpp utils.h
	$(CC) $(CFLAGS) keyword.cpp

clean:
	rm -f test
	rm -f *.o
