CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS = -o

INC = ./inc/
SRC = ./src
BIN = ./bin
OBJ = ./obj
LIB = ./lib

IFLAGS= -I $(INC)

PROJECT1 : $(OBJ)/mainProg.o $(OBJ)/myFunctions.o
	$(CC) $(LDFLAGS) $(BIN)/PROJECT1 $(OBJ)/mainProg.o $(OBJ)/myFunctions.o

$(OBJ)/mainProg.o : $(SRC)/mainProg.c
	$(CC) $(CFLAGS) $(SRC)/mainProg.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/myFunctions.o : $(SRC)/myFunctions.c
	$(CC) $(CFLAGS) $(SRC)/myFunctions.c $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

	@echo "Cleaning done"
