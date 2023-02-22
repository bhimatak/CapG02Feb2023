CFLAGS = -Wall -c -g
LDFLAGS = -o
OBJ = ./obj
SRC = ./src
BIN = ./bin
INC = ./inc/
IFLAGS = -I $(INC)

all:prg01 prg02

prg01: $(OBJ)/string.o
	$(CC) $(LDFLAGS) $(BIN)/prg01 $(OBJ)/string.o
$(OBJ)/string.o: $(SRC)/string.c
	$(CC) $(CFLAGS) $(SRC)/string.c
	mv *.o $(OBJ)/

prg02: $(OBJ)/prg02.o
	$(CC) $(LDFLAGS) $(BIN)/prg02 $(OBJ)/prg02.o
$(OBJ)/prg02.o: $(SRC)/prg02.c
	$(CC) $(CFLAGS) $(SRC)/prg02.c
	mv *.o $(OBJ)/
clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*

prg04: $(OBJ)/prg04.o
	$(CC) $(LDFLAGS) $(BIN)/prg04 $(OBJ)/prg04.o
$(OBJ)/prg04.o: $(SRC)/prg04.c
	$(CC) $(CFLAGS) $(SRC)/prg04.c
	mv *.o $(OBJ)/

prg03: $(OBJ)/prg03.o
	$(CC) $(LDFLAGS) $(BIN)/prg03 $(OBJ)/prg03.o
$(OBJ)/prg03.o: $(SRC)/prg03.c
	$(CC) $(CFLAGS) $(SRC)/prg03.c
	mv *.o $(OBJ)/

prg05: $(OBJ)/prg05.o
	$(CC) $(LDFLAGS) $(BIN)/prg05 $(OBJ)/prg05.o
$(OBJ)/prg05.o: $(SRC)/prg05.c
	$(CC) $(CFLAGS) $(SRC)/prg05.c
	mv *.o $(OBJ)/
