CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS = -o

INC = ./inc/
SRC = ./src
BIN = ./bin
OBJ = ./obj
LIB = ./lib

IFLAGS= -I $(INC)

ARRAYPOINTER : $(OBJ)/array.o $(OBJ)/myfunctions.o
	$(CC) $(LDFLAGS) $(BIN)/ARRAYPOINTER $(OBJ)/array.o $(OBJ)/myfunctions.o

$(OBJ)/array.o : $(SRC)/array.c
	$(CC) $(CFLAGS) $(SRC)/array.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/myfunctions.o : $(SRC)/myfunctions.c
	$(CC) $(CFLAGS) $(SRC)/myfunctions.c $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

	@echo "Cleaning done"
