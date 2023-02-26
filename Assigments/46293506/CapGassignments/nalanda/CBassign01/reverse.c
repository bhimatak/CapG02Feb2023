#include<stdio.h>
#include"myHeader.h"
#define SIZE 5
int reverse(int arr[])
{
   int i;
   int j=5;
   int temp;
   for(i=0;i<SIZE;i++)
    {
	  temp=arr[i];
	  arr[i]=arr[SIZE-i];
	  arr[SIZE-i]=temp;

	  
	}
}

