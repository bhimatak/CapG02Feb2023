#include<stdio.h>

int inputFunc(int[]);
void descSort(int[],int);

int main()
{
	int arr[30];
	int n;

	n=inputFunc(arr);

	descSort(arr,n);

	return 0;

}

int inputFunc(int arr[])
{
	
	int *ptr;
	int n,it;

	printf("\n\n Enter the array size: ");
	scanf("%d",&n);

	ptr=arr;

	for(it=0;it<n;it++)
	{
		scanf("%d",(ptr+it));
	}

	return n;
}

void descSort(int arrt[],int n2)
{
	int *ptr2;
	ptr2=arrt;
	int i,j,temp=0;

	for(i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(*(ptr2+i)<*(ptr2+j))
			{
				temp=*(ptr2+i);
				*(ptr2+i)=*(ptr2+j);
				*(ptr2+j)=temp;
			}
		}
	}

	printf("\n\n");

	for(i=0;i<n2;i++)
	{
		printf("%d\t",*(ptr2+i));
	}

	printf("\n\n");
}
