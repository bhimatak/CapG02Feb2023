CC = gcc
CFLAGS = -c -g -Wall
SRC = ./src
OBJ = ./obj
BIN = ./bin
INC = ./inc/
LDFLAGS = -o
IFLAGS = -I $(INC)

CircleArea: $(OBJ)/myFunction.o $(OBJ)/areaCircle.o
	$(CC) $(LDFLAGS) $(BIN)/CircleArea $(OBJ)/myFunction.o $(OBJ)/areaCircle.o
$(OBJ)/myFunction.o: $(SRC)/myFunction.c
	$(CC) $(CFLAGS) $(SRC)/myFunction.c $(IFLAGS)
	mv *.o $(OBJ)/
$(OBJ)/areaCircle.o: $(SRC)/areaCircle.c
	$(CC) $(CFLAGS) $(SRC)/areaCircle.c $(IFLAGS)
	mv *.o $(OBJ)/
	

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"
