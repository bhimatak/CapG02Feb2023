CC = gcc
CFLAGS = -Wall -c -g
SRC = ./src
OBJ = ./obj
BIN = ./bin
INC = ./inc/
LDFLAGS = -o
IFLAGS = -I $(INC)

stackWithArray: $(OBJ)/myFunction.o $(OBJ)/stack.o
	$(CC) $(LDFLAGS) $(BIN)/stackWithArray $(OBJ)/myFunction.o $(OBJ)/stack.o
$(OBJ)/myFunction.o: $(SRC)/myFunction.c
	$(CC) $(CFLAGS) $(SRC)/myFunction.c $(IFLAGS)
	mv *.o $(OBJ)/
$(OBJ)/stack.o: $(SRC)/stack.c
	$(CC) $(CFLAGS) $(SRC)/stack.c $(IFLAGS)
	mv *.o $(OBJ)/
	

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
