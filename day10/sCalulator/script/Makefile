CC = gcc
CFLAGS = -Wall -c -g

./bin/sCalc: ./obj/prg01.o ./obj/sum.o ./obj/multi.o ./obj/disp.o
	gcc -o ./bin/sCalc ./obj/prg01.o ./obj/sum.o ./obj/multi.o ./obj/disp.o

./obj/prg01.o: ./src/prg01.c
	gcc -Wall -c -g ./src/prg01.c -I ./inc/
	mv prg01.o ./obj/

./obj/sum.o: ./src/sum.c
	gcc -Wall -c -g ./src/sum.c -I ./inc/
	mv *.o ./obj/

./obj/multi.o: ./src/multi.c
	gcc -Wall -c -g ./src/multi.c -I ./inc/
	mv *.o ./obj/

./obj/disp.o: ./src/disp.c
	gcc -Wall -c -g ./src/disp.c -I ./inc/
	mv *.o ./obj/

