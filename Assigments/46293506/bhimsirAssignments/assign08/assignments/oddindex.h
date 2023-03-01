#include<stdio.h>

int oddIndex(int []);

int oddIndex(int arr[])
{
   int i;
   printf("odd index Elememts\n");
   for(i=0;i<10;i++)
    {
	  if(i%2!=0)
	    {
		   printf("%d ",arr[i]);
		}
    }
	printf("\n\n");
return 0;
}


