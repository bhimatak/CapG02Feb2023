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
pthread_mutex_t lock;

void *findEven(void *vargs)
{
	ULL i;
	ULL start,end;
	struct varg *ptr = (struct varg *)vargs;

	start = ptr->start;
	end = ptr->end;

	pthread_mutex_lock(&lock);
	printf("\n%lld \n%lld\n",ptr->start,ptr->end);
	
	for(i = start;i<=end;i++)
	{
		if((i & 1) == 0)
		{
			sumEven += i;
			// printf("\neven",ptr->tid);
			// sleep(1);
		}

	}
	pthread_mutex_unlock(&lock);
	printf("\nIn Thread Sum Even = %lld\n", sumEven);
	
}


void *findOdd(void *vargs)
{
	ULL i;
	ULL start,end;
	struct varg *ptr = (struct varg *)vargs;

	start = ptr->start;
	end = ptr->end;

	// printf("\n%lld \n%lld\n",ptr->start,ptr->end);
	for(i = start;i<=end;i++)
	{
		if((i & 1) == 1)
		{
			sumOdd += i;
			printf("\nOdd");
			// sleep(1);
		}

	}

	printf("\nIn Thread Sum Odd = %lld\n", sumOdd);
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

	pthread_t tid1, tid2,tid3,tid4;

	// arg.a = 101;
	// arg.b = 201;

	arg.start = 0;
	arg.end = 1900000000;

	if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("\n mutex init has failed\n");
        return 1;
    }
  
	
	// pthread_create(&tid, NULL, func,&arg);
	pthread_create(&tid1, NULL, findEven,&arg);
	
	
	pthread_create(&tid2, NULL, findEven,&arg);
	

	// pthread_create(&tid3, NULL, findEven,&arg);
	// pthread_create(&tid4, NULL, findOdd,&arg);
	pthread_join(tid1,NULL);
	
	pthread_join(tid2,NULL);
	// pthread_join(tid4,NULL);
	// pthread_join(tid3,NULL);

	// printf("\nSum Even = %lld\n",sumEven);
	pthread_mutex_destroy(&lock);
	pthread_exit(NULL);

	return 0;
}