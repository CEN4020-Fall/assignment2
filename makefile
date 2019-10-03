CC = g++
CFLAGS = --std=c++11 -Wall -c
LFLAGS = --std=c++11
SRC = src
OBJ = obj
DOC = doc
TEST = test

all: Assignment2

Assignment2: main.o Jet.o Car.o Bicycle.o PoweredVehicle.o Vehicle.o
	$(CC) $(LFLAGS) main.o Jet.o Car.o Bicycle.o PoweredVehicle.o Vehicle.o -o Assignment2

main.o: main.cpp Jet.h Car.h Bicycle.h
	$(CC) $(CFLAGS) main.cpp -o main.o

Jet.o: Jet.cpp Jet.h
	$(CC) $(CFLAGS) Jet.cpp -o Jet.o

Car.o: Car.cpp Car.h
	$(CC) $(CFLAGS) Car.cpp -o Car.o

Bicycle.o: Bicycle.cpp Bicycle.h
	$(CC) $(CFLAGS) Bicycle.cpp -o Bicycle.o

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	$(CC) $(CFLAGS) PoweredVehicle.cpp -o PoweredVehicle.o

Vehicle.o: Vehicle.cpp Vehicle.h
	$(CC) $(CFLAGS) Vehicle.cpp -o Vehicle.o

.PHONY: clean doc test

doc:
	doxygen doxyfile

test:
	./test.sh

clean:
	rm ./*.o
	rm Assignment2

