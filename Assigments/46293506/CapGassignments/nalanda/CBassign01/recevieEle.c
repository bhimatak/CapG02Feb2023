#include<stdio.h>
#include"myHeader.h"

  int recevieEle()
  {
    int arr[6];
	int i;
    
	for(i=0;i<5;i++)
	 {
	 printf("Enter a element\n");
	 scanf("%d",&arr[i]);
	 }
     
	 printList1(arr);
	 reverse(arr);
	 printf("Array elements after Reversing\n");
	 printList1(arr);
	 return 0;

  }
	    
