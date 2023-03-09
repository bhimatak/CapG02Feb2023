CC = gcc
CFLAGS = -c -g -Wall
SRC = ./src
OBJ = ./obj
BIN = ./bin
INC = ./inc/
LDFLAGS = -o
IFLAGS = -I $(INC)

Employee: $(OBJ)/myFunctions.o $(OBJ)/employee.o
	$(CC) $(LDFLAGS) $(BIN)/Employee $(OBJ)/myFunctions.o $(OBJ)/employee.o
$(OBJ)/myFunctions.o: $(SRC)/myFunctions.c
	$(CC) $(CFLAGS) $(SRC)/myFunctions.c $(IFLAGS)
	mv *.o $(OBJ)/
$(OBJ)/employee.o: $(SRC)/employee.c
	$(CC) $(CFLAGS) $(SRC)/employee.c $(IFLAGS)
	mv *.o $(OBJ)/
	

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
