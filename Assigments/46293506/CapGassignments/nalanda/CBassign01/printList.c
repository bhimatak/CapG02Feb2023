#include<stdio.h>
#include"myHeader.h"

int printList()
{
 int i;
 int arr[10]={2,4,9,7,5,4,3,2,0,2};
  
  printf("Array elements are\n");
  for(i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
   }
  printf("\n\n");

  return 0;
}
