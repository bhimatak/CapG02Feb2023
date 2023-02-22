CC = gcc
CFLAGS = -Wall -c -g
LDFLAGS = -o
OBJ = ./obj
SRC = ./src
BIN = ./bin
INC = ./inc/
IFLAGS = -I $(INC)

$(BIN)/aCalc: square.o rectangle.o triangle.o disp.o main.o
	@echo "Building aCalc Application"
	$(CC) $(LDFLAGS) $(BIN)/aCalc $(OBJ)/main.o $(OBJ)/square.o $(OBJ)/rectangle.o $(OBJ)/triangle.o $(OBJ)/disp.o
	@echo "Built aCalc Application"
main.o: $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c $(IFLAGS)
	mv main.o $(OBJ)/
square.o: $(SRC)/square.c
	$(CC) $(CFLAGS) $(SRC)/square.c $(IFLAGS)
	mv square.o $(OBJ)/
rectangle.o: $(SRC)/rectangle.c
	$(CC) $(CFLAGS) $(SRC)/rectangle.c $(IFLAGS)
	mv rectangle.o $(OBJ)/
triangle.o: $(SRC)/triangle.c
	$(CC) $(CFLAGS) $(SRC)/triangle.c $(IFLAGS)
	mv triangle.o $(OBJ)/
disp.o: $(SRC)/disp.c
	$(CC) $(CFLAGS) $(SRC)/disp.c $(IFLAGS)
	mv disp.o $(OBJ)/
clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"	
