CC = gcc
CFLAGS = -Wall -g -c
LDFLAGS = -o

INC = ./inc/
SRC = ./src
OBJ = ./obj
BIN = ./bin

IFLAGS = -I $(INC)

stack: $(OBJ)/stack.o $(OBJ)/function.o
	$(CC) $(LDFLAGS) $(BIN)/stack $(OBJ)/stack.o $(OBJ)/function.o

$(OBJ)/stack.o: $(SRC)/stack.c
	$(CC) $(CFLAGS) $(SRC)/stack.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/function.o: $(SRC)/function.c
	$(CC) $(CFLAGS) $(SRC)/function.c $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	
	@echo "CLEANING DONE"
