CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS = -o

INC = ./inc/
SRC = ./src
BIN = ./bin
OBJ = ./obj
LIB = ./lib

IFLAGS= -I $(INC)

SRSStack : $(OBJ)/srsStack.o $(OBJ)/myfunctions.o
	$(CC) $(LDFLAGS) $(BIN)/SRSStack $(OBJ)/srsStack.o $(OBJ)/myfunctions.o

$(OBJ)/srsStack.o : $(SRC)/srsStack.c
	$(CC) $(CFLAGS) $(SRC)/srsStack.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/myfunctions.o : $(SRC)/myfunctions.c
	$(CC) $(CFLAGS) $(SRC)/myfunctions.c $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

	@echo "Cleaning done"
