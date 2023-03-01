#include<stdio.h>

#include"oddindex.h"

  int main()
     {
	    int i;
		int arr[10]={ 1,2,3,4,5,6,7,8,9,10};
		printf("Elements of array\n");
        for(i=0;i<10;i++)
		 {
		   printf("%d ",arr[i]);
		  }
		  printf("\n\n");
		oddIndex(arr);
		return 0;
	}


