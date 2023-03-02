CC = gcc
CFLAGS = -c -g -Wall
SRC = ./src
OBJ = ./obj
BIN = ./bin
INC = ./inc/
LDFLAGS = -o
IFLAGS = -I $(INC)

stackWithArray: $(OBJ)/myFunctions.o $(OBJ)/stack.o
	$(CC) $(LDFLAGS) $(BIN)/stackWithArray $(OBJ)/myFunctions.o $(OBJ)/stack.o
$(OBJ)/myFunctions.o: $(SRC)/myFunctions.c
	$(CC) $(CFLAGS) $(SRC)/myFunctions.c $(IFLAGS)
	mv *.o $(OBJ)/
$(OBJ)/stack.o: $(SRC)/stack.c
	$(CC) $(CFLAGS) $(SRC)/stack.c $(IFLAGS)
	mv *.o $(OBJ)/
	

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
