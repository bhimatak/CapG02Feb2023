#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

typedef unsigned long long ULL;

ULL sumOdd = 0;
ULL sumEven = 0;

void findEven(ULL, ULL);
void findOdd(void **);

int main()
{
	ULL start = 0, end = 1900000000;
	ULL vargs[2] = {0,1900000000};
	pthread_t tid1,tid2;

	pthread_create(&tid1, NULL, findOdd,(void *)vargs);

	printf("\nSum Even = %llu",sumEven);
	printf("\nSum Odd = %llu", sumOdd);

	pthread_exit(NULL);


}

void findOdd(void *vargs[])
{
	ULL i;
	/*for(i = start;i<=end;i++)
	{
		if((i & 1) == 1)
		{
			sumOdd += i;
			// sleep(1);
		}

	}*/
}

void findEven(ULL start, ULL end)
{
	ULL i;
	for(i=start;i<=end;i++)
	{
		if((i & 1) == 0)
		{
			sumEven += i;
			// sleep(1);
		}
	}
}