#include <stdio.h>

void printList(int [], int);
//int getCountArr(int *);

int revArr(int [], int);

int main()
{
	int a[5] = {10,20,30,40,50};

	printList(a,5);
	revArr(a,5);
	printf("\nAfter Reversing the array\n");
	printList(a,5);
	
	return 0;
}

void printList(int arr[], int n)
{
	int i;
	printf("\nList is:\n");
	for(i=0;i<n;i++)
		printf("\n%d",arr[i]);

	printf("\n\n");
}

int revArr(int arr[], int n)
{
	int i,j;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i]=temp;
		}
	}
}

