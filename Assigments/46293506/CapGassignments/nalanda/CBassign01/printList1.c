#include<stdio.h>
#include"myHeader.h"

int printList1(int arr[])
 {
   int i;  
   printf("Array elements are\n");
   
   for(i=0;i<5;i++)
    {
      printf("%d ",arr[i]);
     }
    printf("\n\n");
  
    return 0;		
}
         
