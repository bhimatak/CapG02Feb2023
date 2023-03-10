#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void *display(void *ptr)
{
	int *ptr1 = (int *)ptr;
	int count = *ptr1;
	while(count >=0)
	{
		printf("\nThis a C Programming class\n");
		sleep(1);
		count--;
	}
}

int main()
{
	pthread_t tid;
	int a = 10;
	printf("\nMain before thread is created\n");
	pthread_create(&tid,NULL,display,&a);
	pthread_join(tid,NULL);
	pthread_join(tid,NULL);
	printf("\nMain after thread is done\n");

	return 0;
}