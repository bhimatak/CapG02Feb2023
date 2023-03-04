CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS = -o

INC = ./inc/
SRC = ./src
BIN = ./bin
OBJ = ./obj
LIB = ./lib

IFLAGS= -I $(INC)

all: Arraypointer

Arraypointer : $(OBJ)/Arraypointers.o $(OBJ)/myfunctions.o
	$(CC) $(LDFLAGS) $(BIN)/Arraypointer $(OBJ)/Arraypointers.o $(OBJ)/myfunctions.o

$(OBJ)/Arraypointers.o : $(SRC)/Arraypointers.c
	$(CC) $(CFLAGS) $(SRC)/Arraypointers.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/myfunctions.o : $(SRC)/myfunctions.c
	$(CC) $(CFLAGS) $(SRC)/myfunctions.c $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

	@echo "Cleaning done"

