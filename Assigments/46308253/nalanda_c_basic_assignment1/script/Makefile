CC = gcc
CFLAGS = -c -g -Wall
SRC = ./src
OBJ = ./obj
BIN = ./bin
INC = ./inc/
LDFLAGS = -o
IFLAGS = -I $(INC)

ArrayImplementation: $(OBJ)/myFunctions.o $(OBJ)/arrayImplementation.o
	$(CC) $(LDFLAGS) $(BIN)/ArrayImplementation $(OBJ)/myFunctions.o $(OBJ)/arrayImplementation.o
$(OBJ)/myFunctions.o: $(SRC)/myFunctions.c
	$(CC) $(CFLAGS) $(SRC)/myFunctions.c $(IFLAGS)
	mv *.o $(OBJ)/
$(OBJ)/arrayImplementation.o: $(SRC)/arrayImplementation.c
	$(CC) $(CFLAGS) $(SRC)/arrayImplementation.c $(IFLAGS)
	mv *.o $(OBJ)/
	

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
