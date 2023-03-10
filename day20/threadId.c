#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *myThreadFun(void *vargp)
{
	// sleep(1);
	printf("Printing GeeksQuiz from Thread \n");
	return NULL;
}

int main()
{
	int i;
	pthread_t tid;

	// Let us create three threads
	// for (i = 0; i < 3; i++)
	pthread_create(&tid, NULL, myThreadFun,NULL);
	printf("\n1 Thread id = %ld\n",tid);

	pthread_create(&tid, NULL, myThreadFun,NULL);
	printf("\n2 Thread id = %ld\n",tid);

	pthread_exit(NULL);
	return 0;
}