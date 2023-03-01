CC = gcc
CFLAGS = -Wall -c -g
LDFLAGS = -o

INC = ./inc/
SRC = ./src
OBJ = ./obj
BIN = ./bin

IFLAGS = -I $(INC)

all: prg01 prg02 prg03 prg04

prg01: $(OBJ)/prg01.o
	$(CC) $(LDFLAGS) $(BIN)/prg01 $(OBJ)/prg01.o

$(OBJ)/prg01.o: $(SRC)/prg01.c
	$(CC) $(CFLAGS) $(SRC)/prg01.c
	mv *.o $(OBJ)/

prg02: $(OBJ)/prg02.o
	$(CC) $(LDFLAGS) $(BIN)/prg02 $(OBJ)/prg02.o

$(OBJ)/prg02.o: $(SRC)/prg02.c
	$(CC) $(CFLAGS) $(SRC)/prg02.c
	mv *.o $(OBJ)/

prg03: $(OBJ)/prg03.o
	$(CC) $(LDFLAGS) $(BIN)/prg03 $(OBJ)/prg03.o

$(OBJ)/prg03.o: $(SRC)/prg03.c
	$(CC) $(CFLAGS) $(SRC)/prg03.c
	mv *.o $(OBJ)/

prg04: $(OBJ)/prg04.o
	$(CC) $(LDFLAGS) $(BIN)/prg04 $(OBJ)/prg04.o

$(OBJ)/prg04.o: $(SRC)/prg04.c
	$(CC) $(CFLAGS) $(SRC)/prg04.c
	mv *.o $(OBJ)/






clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
