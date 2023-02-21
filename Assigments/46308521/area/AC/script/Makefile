CC = gcc
CFLAG= -Wall -c -g

output: ./obj/main.o ./obj/fun.o
	gcc -o ./bin/output ./obj/main.o ./obj/fun.o
./obj/main.o: ./src/main.c
	gcc -Wall -c -g ./src/main.c -I ./inc/
	mv main.o ./obj/
./obj/fun.o: ./src/fun.c
	gcc -Wall -c -g ./src/fun.c -I ./inc/
	mv fun.o ./obj/
