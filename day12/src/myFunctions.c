#include <myHeader.h>
#include <stdio.h>

/* dispArr:  prints the list */
void dispArr(int *arr, int aSize)
{
	int it;
	printf("\nList is :\n");
	for(it=0;it<aSize;it++)
		printf("%d ",arr[it]);
	printf("\n\n");
}

/* 
getValArr: set/get the values from the stdin and store it
in the array
*/
void getValArr(int *arr, int aSize)
{
	int it;
	printf("\nEnter the values of the array of Size %d:", aSize);
	for(it=0;it<aSize;it++)
		scanf("%d",&arr[it]);
	printf("\nSetting the values is Done!\n\n");
}

/*
sortAArr: sort the array/list in ascending order
*/
void sortAArr(int *arr, int aSize)
{
	int it1,it2, temp;

	for(it1=0;it1<aSize;it1++)
	{
		for(it2=it1;it2<aSize;it2++)
		{
			if(arr[it1]>arr[it2])
			{
				temp = arr[it2];
				arr[it2] = arr[it1];
				arr[it1] = temp;
			}
		}
	}

}



void sortDArr(int *arr, int aSize)
{
	int it1,it2, temp;

	for(it1=0;it1<aSize;it1++)
	{
		for(it2=it1;it2<aSize;it2++)
		{
			if(arr[it1]<arr[it2])
			{
				temp = arr[it2];
				arr[it2] = arr[it1];
				arr[it1] = temp;
			}
		}
	}

}