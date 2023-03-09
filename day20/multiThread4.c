#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

typedef unsigned long long ULL;
struct varg
{
	ULL start;
	ULL  end;
};

ULL sumOdd = 0;
ULL sumEven = 0;

void *findEven(void *vargs)
{
	ULL i;
	ULL start,end;
	struct varg *ptr = (struct varg *)vargs;

	start = ptr->start;
	end = ptr->end;

	printf("\n%lld \n%lld\n",ptr->start,ptr->end);
	for(i = start;i<=end;i++)
	{
		if((i & 1) == 0)
		{
			sumEven += i;
			// sleep(1);
		}

	}

	printf("\nIn Thread Sum Even = %lld\n", sumEven);
}

void *func(void *vargs)
{
	// int *ptr = (int *)vargs;
	// printf("\nvargs = %d\n",*ptr);
	// char *Name = (char *)vargs;
	// printf("\nvargs = %s\n",Name);
	// struct varg *ptr  = (struct varg *)vargs;
	// printf("\n%d\n%d\n",ptr->a,ptr->b);
}

int main()
{
	int a=10;
	char name[20] = "Bhima";
	struct varg arg;

	pthread_t tid;

	// arg.a = 101;
	// arg.b = 201;

	arg.start = 0;
	arg.end = 1900000000;
	
	// pthread_create(&tid, NULL, func,&arg);
	pthread_create(&tid, NULL, findEven,&arg);

	printf("\nSum Even = %lld\n",sumEven);
	pthread_exit(NULL);

	return 0;
}