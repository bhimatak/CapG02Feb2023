CC = gcc
CFLAGS = -c -g -Wall
SRC = ./src
OBJ = ./obj
BIN = ./bin
INC = ./inc/
LDFLAGS = -o
IFLAGS = -I $(INC)

SentenceManipultion: $(OBJ)/myFunctions.o $(OBJ)/sentence.o
	$(CC) $(LDFLAGS) $(BIN)/SentenceManipulation $(OBJ)/myFunctions.o $(OBJ)/sentence.o
$(OBJ)/myFunctions.o: $(SRC)/myFunctions.c
	$(CC) $(CFLAGS) $(SRC)/myFunctions.c $(IFLAGS)
	mv *.o $(OBJ)/
$(OBJ)/sentence.o: $(SRC)/sentence.c
	$(CC) $(CFLAGS) $(SRC)/sentence.c $(IFLAGS)
	mv *.o $(OBJ)/
	

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
