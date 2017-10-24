#Link flags
LFLAGS = -Wall
#Compile flags
CFLAGS = -c -Wall -std=c++14 -g -O0 -pedantic-errors
CC = g++

all: test

run: all
	echo "Testing C++ ciphers"
	./test

test: test.o utils.o atbash.o rot.o morse.o keyword.o railfence.o
	$(CC) $(LFLAGS) test.o utils.o atbash.o rot.o morse.o keyword.o railfence.o -o test

test.o: test.cpp ciphers.h utils.h
	$(CC) $(CFLAGS) test.cpp

utils.o: utils.cpp
	$(CC) $(CFLAGS) utils.cpp

atbash.o: atbash.cpp ciphers.h
	$(CC) $(CFLAGS) atbash.cpp

rot.o: rot.cpp ciphers.h
	$(CC) $(CFLAGS) rot.cpp

morse.o: morse.cpp ciphers.h
	$(CC) $(CFLAGS) morse.cpp

keyword.o: keyword.cpp utils.h ciphers.h
	$(CC) $(CFLAGS) keyword.cpp

railfence.o: railfence.cpp ciphers.h
	$(CC) $(CFLAGS) railfence.cpp

clean:
	rm -f test
	rm -f *.o
