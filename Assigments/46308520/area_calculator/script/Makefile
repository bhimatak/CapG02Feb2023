CFLAG= -Wall -c -g
CC = gcc

result: ./obj/main.o ./obj/function.o
	gcc -o ./bin/result ./obj/main.o ./obj/function.o
./obj/main.o: ./src/main.c
	gcc -Wall -c -g ./src/main.c -I ./inc/
	mv main.o ./obj/
./obj/function.o: ./src/function.c
	gcc -Wall -c -g ./src/function.c -I ./inc/
	mv function.o ./obj/


