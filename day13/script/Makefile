CC = gcc
CFLAGS = -Wall -c -g
LDFLAGS = -o

INC = ./inc/
SRC = ./src
OBJ = ./obj
BIN = ./bin

IFLAGS = -I $(INC)

all: app

app: $(OBJ)/Main.o $(OBJ)/persons.o $(OBJ)/common.o $(OBJ)/login.o $(OBJ)/ticket.o
	$(CC) $(LDFLAGS) $(BIN)/app $(OBJ)/Main.o $(OBJ)/persons.o $(OBJ)/common.o $(OBJ)/login.o $(OBJ)/ticket.o

$(OBJ)/Main.o: $(SRC)/Main.c
	$(CC) $(CFLAGS) $(SRC)/Main.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/persons.o: $(SRC)/persons.c
	$(CC) $(CFLAGS) $(SRC)/persons.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/login.o: $(SRC)/login.c
	$(CC) $(CFLAGS) $(SRC)/login.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/ticket.o: $(SRC)/ticket.c
	$(CC) $(CFLAGS) $(SRC)/ticket.c $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/common.o: $(SRC)/common.c
	$(CC) $(CFLAGS) $(SRC)/common.c $(IFLAGS)
	mv *.o $(OBJ)/


clean:
	rm -f $(OBJ)/*
	rm -f $(BIN)/*
	@echo "Cleaning Done!"

