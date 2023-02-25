CC =gcc 
CFLAGS = -Wall -c -g 
BIN = ./bin
INC = ./inc
SRC = ./src
OBJ = ./obj

$(bin)/calC : main.o square.o rectangle.o triangle.o circle.o
	$(CC) -o $(BIN)/Calc $(OBJ)/main.o $(OBJ)/square.o $(OBJ)/rectangle.o $(OBJ)/circle.o $(OBJ)/triangle.o

main.o : $(SRC)/main.c
	$(CC) $(CFLAGS) $(SRC)/main.c -I $(INC)/
	mv main.o $(OBJ)/

square.o : $(SRC)/square.c
	$(CC) $(CFLAGS) $(SRC)/square.c -I $(INC)/
	mv square.o $(OBJ)/

rectangle.o : $(SRC)/rectangle.c
	$(CC) $(CFLAGS) $(SRC)/rectangle.c -I $(INC)/
	mv rectangle.o $(OBJ)/

circle.o : $(SRC)/circle.c
	$(CC) $(CFLAGS) $(SRC)/circle.c -I $(INC)/
	mv circle.o $(OBJ)/

triangle.o: $(SRC)/triangle.c
	$(CC) $(CFLAGS) $(SRC)/triangle.c -I $(INC)/
	mv triangle.o $(OBJ)/

clean:
	rm ./obj/*
	rm ./bin/*
