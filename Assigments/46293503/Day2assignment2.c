#include <stdio.h>
void descSort(int[],int);
int main()
{
	int arr[30];
	int *ptr;
	int n,it;
	printf("\n\n enter the array size: ");
	scanf("%d",&n);
	ptr =arr;
	for(it=0;it<n;it++)
	{
		scanf("%d",(ptr+it));
	}
	descSort(arr,n);
	return 0;
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
