#include <stdio.h>
void dSort(int[],int);
int main()
{
	int arr[30];
	int *ptr;
	int n,i;
	printf("\n\n enter the array size: ");
	scanf("%d",&n);
	ptr =arr;
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	dSort(arr,n);
	return 0;
}
void dSort(int arrt[],int n2)
{
	int *ptr2;
	ptr2=arrt;
	int i,j,temp=0;
	for(i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(*(ptr2+i)< *(ptr2+j))
			{
				temp=*(ptr2+i);
				*(ptr2+i)=*(ptr2+j);
				*(ptr2+j)=temp;
			}
		}
	}
	for(i=0;i<n2;i++)
	{
		printf("%d\t",*(ptr2+i));
	}
}
