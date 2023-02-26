#include<stdio.h>
#include"myHeader.h"

int isEqulibrium(int size,int arr[])
{
	int res;
	int sum=0;
	int i,j;
	for(i=0;i<size;i++)
	{
		sum=sum+i;
		if(sum=arr[i+1])
		{
			res=arr[i];
		}
	}
	return res;
}

int printArray()
{
	int size;
	int arr[size];
	int i,res;
	
	printf("Enter a Size Of an array\n");
	scanf("%d",&size);
        
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	res=isEqulibrium(size,arr);

        if(res>0)
	{
		printf("%d\n",res);
	}
	else
	{
		printf("Mo Equlibrium\n");
	}
}



	

