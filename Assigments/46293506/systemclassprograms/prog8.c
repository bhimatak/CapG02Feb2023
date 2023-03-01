#include<stdio.h>
#define A_SIZE 5
int main()

{
   int i,arr[A_SIZE];
   for(i=0;i<A_SIZE;i++)
      {
	     printf("enter the array element %d\n",i);
		 scanf("%d",&arr[i]);
	 }
    printf("The array elements are\n");
	for(i=0;i<A_SIZE;i++)
	  {
	    printf("%d\n",arr[i]);
	  }
  return 0;
 }
