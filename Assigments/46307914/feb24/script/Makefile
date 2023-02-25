CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS= -o

INC= ./inc/
SRC= ./src
OBJ= ./obj
LIB= ./lib
BIN= ./bin

IFLAGS= -I $(INC)

StackProg : $(OBJ)/stack.o $(OBJ)/myfunctions.o
	$(CC) $(LDFLAGS) $(BIN)/StackProg $(OBJ)/stack.o $(OBJ)/myfunctions.o 

$(OBJ)/stack.o : $(SRC)/stack.c
	$(CC) $(CFLAGS) $(SRC)/stack.c $(IFLAGS)
	mv *.o $(OBJ)/

	
$(OBJ)/myfunctions.o : $(SRC)/myfunctions.c
	$(CC) $(CFLAGS) $(SRC)/myfunctions.c $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f $(BIN)/*
	rm -f $(OBJ)/*

	@echo "Cleaning done"


