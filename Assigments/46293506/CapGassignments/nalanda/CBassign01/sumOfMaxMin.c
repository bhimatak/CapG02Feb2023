#include"myHeader.h"
#include<stdio.h>

int sum()
{
   int maxnum;
   int minnum;
   int arr[6]={3,6,9,2,5,8};
   
   maxnum=max(arr);
   minnum=min(arr);
   printf("maxNumber :%d \n MinNumber is:%d\n",maxnum,minnum);
   return maxnum + minnum;
 
 }
