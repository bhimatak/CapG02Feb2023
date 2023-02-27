#include<stdio.h>

#define MAX 5

int getArray(int *);
int printArray(int *);
int sortArray(int *);

int  main()
{
	int arr[MAX];
	getArray(arr);
	printArray(arr);
	sortArray(arr);
	printArray(arr);


	return 0;

}

int sortArray(int *arr)
{
	int i,j;
	int temp;
	for(i=0;i<=MAX-2;i++)
	{
		for(j=0;j<=MAX-2-i;j++)
		{
			if(*(arr+j)<*(arr+j+1))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
				

			}
		}
	}
}


int getArray(int *arr)
{
	int i;
	for(i=0;i<MAX;i++)
	{
		printf("%d ith element\n",i);
		scanf("%d",(arr+i));
	}
}
int printArray(int *arr)
{
	int i;
	for(i=0;i<MAX;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
