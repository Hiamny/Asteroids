CC=g++
CFLAGS=-c -Wall -std=c++0x
LDFLAGS=-lmingw32 -lopengl32 -lglew32 -lSDL2main -lSDL2 
SOURCES=$(wildcard *.c *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
EXECTUABLE=Asteroids

all: $(SOURCES) $(EXECTUABLE)

$(EXECTUABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECTUABLE)