CC = gcc
CFLAGS = -Wall -c -g
LDFLAGS = -o

INC = ./inc/
SRC = ./src
OBJ = ./obj
BIN = ./bin

IFLAGS = -I $(INC)

all: prg01

prg01: $(OBJ)/prg01.o
	$(CC) $(LDFLAGS) $(BIN)/prg01 $(OBJ)/prg01.o

$(OBJ)/prg01.o: $(SRC)/prg01.c
	$(CC) $(CFLAGS) $(SRC)/prg01.c
	mv *.o $(OBJ)/


clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

