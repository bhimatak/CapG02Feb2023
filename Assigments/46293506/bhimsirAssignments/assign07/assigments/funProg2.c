#include<stdio.h>
#include"myHeader.h"

int reverseArr(int arr[])
{
	int it;
	int j=0;
	for(it=MAX-1;it>=0;it--)
	{
		arr[j]=arr[it]; 
		j++;
	}
	printf("\n");
}

int getArrayElement()
{
	int arr[MAX];
	int it;
	for(it=0;it<MAX;it++)
	{
		scanf("%d",&arr[it]);
	}
	
	printf("Array Elements Before Sorting\n");

	for(it=0;it<MAX;it++)
	{
		printf("a[%d]-->%d\n ",it,arr[it]);
	}
	printf("\n");

	
	printf("Array Elements after Reversing\n");
	
	reverseArr(arr);
	
	for(it=0;it<MAX;it++)
	{
		printf("arr[%d]-->%d \n",it,arr[it]);
	}



}

