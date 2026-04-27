SRC_FOLDER := ./src
HEADER_FOLDER := ./include

main: main.exe
	./main.exe

main.exe: main.o states.o
	g++ -Wall -o main main.o states.o

main.o: $(SRC_FOLDER)/main.cpp
	g++ -c -o main.o $(SRC_FOLDER)/main.cpp

states.o: $(SRC_FOLDER)/states.cpp $(HEADER_FOLDER)/states.h
	g++ -c -o states.o $(SRC_FOLDER)/states.cpp