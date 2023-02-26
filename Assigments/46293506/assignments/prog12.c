#include<stdio.h>

int main()

 {
    int arr[5] ={2,3,4,5,6};
    int i,j;
	int arr1[5];
    j=4;
	for(i=0;i<5;i++) 
	  {
	    arr1[j]=arr[i];
		j--;
	  }

	 printf("Elements before reversing\n");
	  
	  for(i=0;i<5;i++)
	   { 
	      printf("arr[%d]=%d\n",i,arr[i]);
	   }
	  
	  printf("Elements after reversing\n");
	   for(i=0;i<5;i++)
        {  
		   printf("arr[%d]:%d\n",i,arr1[i]);
		}
	  
  return 0;
  }


