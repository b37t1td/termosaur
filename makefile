CFLAGS=-std=c++11 -O2 -g -Wall $(shell pkg-config --cflags ncursesw)
LDFLAGS=$(shell pkg-config --libs ncursesw)
OBJECTS=termosaur.o

all: termosaur

termosaur: termosaur.hpp
	g++ $(CFLAGS) termosaur.cpp -o termosaur $(LDFLAGS)

clean:
	rm  termosaur

install:
	cp termosaur /usr/local/bin/termosaur

uninstall:
	rm /usr/local/bin/termosaur
