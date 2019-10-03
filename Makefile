main: Bicycle.o Car.o PoweredVehicle.o Vehicle.o Skateboard.o Jet.o Scooter.o
	g++ -o main main.cpp Bicycle.o Car.o PoweredVehicle.o Vehicle.o Skateboard.o Jet.o Scooter.o

Bicycle.o: Bicycle.cpp Bicycle.h
		g++ -c -std=c++11 Bicycle.cpp

Car.o: Car.cpp Car.h
	g++ -c -std=c++11 Car.cpp

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -c -std=c++11 PoweredVehicle.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -c -std=c++11 Vehicle.cpp

Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -c -std=c++11 Skateboard.cpp

Jet.o: Jet.cpp Jet.h
	g++ -c -std=c++11 Jet.cpp

Scooter.o: Scooter.cpp Scooter.h
	g++ -c -std=c++11 Scooter.cpp
