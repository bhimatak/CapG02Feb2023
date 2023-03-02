CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS = -o

INC = ./inc/
SRC = ./src
BIN = ./bin
OBJ = ./obj
LIB = ./lib

IFLAGS= -I $(INC)

all: ARRPTR

ARRPTR : $(OBJ)/ArrPtr.o $(OBJ)/func.o
	$(CC) $(LDFLAGS) $(BIN)/ARRPTR $(OBJ)/ArrPtr.o $(OBJ)/func.o

$(OBJ)/ArrPtr.o : $(SRC)/ArrPtr.c
	$(CC) $(CFLAGS) $(SRC)/ArrPtr.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/func.o : $(SRC)/func.c
	$(CC) $(CFLAGS) $(SRC)/func.c $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

	@echo "Cleaning done"
