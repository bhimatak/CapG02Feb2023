#include"myHeader.h"
#include<stdio.h>


int displayElements(int arr[],int noOfEle)
{
	int i,count=0;
	for(i=0;i<noOfEle;i++)
	{
	  printf("%d ",arr[i]);
	  count++;
	}
	printf("\n\n");
	printf("And Length of array is :%d",count);

	printf("\n\n");
}
