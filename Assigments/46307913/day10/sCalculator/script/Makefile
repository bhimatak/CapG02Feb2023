CC = gcc
CFLAGS = -Wall -c -g
LDFLAGS = -o
OBJ = ./obj
SRC = ./src
BIN = ./bin
INC = ./inc/

IFLAGS = -I $(INC) 

$(BIN)/sCalc: prg01.o sum.o multi.o disp.o
	@echo "Bulding sCalc Application"
	$(CC) $(LDFLAGS) $(BIN)/sCalc $(OBJ)/prg01.o $(OBJ)/sum.o $(OBJ)/multi.o $(OBJ)/disp.o
	@echo "Built sCalc Application"

prg01.o: $(SRC)/prg01.c
	$(CC) $(CFLAGS) $(SRC)/prg01.c $(IFLAGS)
	mv prg01.o $(OBJ)/ 

sum.o: $(SRC)/sum.c
	$(CC) $(CFLAGS) $(SRC)/sum.c $(IFLAGS)
	mv sum.o $(OBJ)/ 

multi.o: $(SRC)/multi.c
	$(CC) $(CFLAGS) $(SRC)/multi.c $(IFLAGS)
	mv multi.o $(OBJ)/ 

disp.o: $(SRC)/disp.c
	$(CC) $(CFLAGS) $(SRC)/disp.c $(IFLAGS)
	mv disp.o $(OBJ)/ 

clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "cleaning Done!"

