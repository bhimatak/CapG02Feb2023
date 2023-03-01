#include"myHeader.h"
#include<stdio.h>

int count()  
{
  int i,num,count=0;
  int arr[10]={2,4,9,7,5,4,3,2,0,2};
  printList();
  printf("enter the element in a array to count\n");
  scanf("%d",&num);
  
  for(i=0;i<10;i++)
  {
    if(arr[i]==num)
	{
	  count++;
    }	
  }  
return count;

}

