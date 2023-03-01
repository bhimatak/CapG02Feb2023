#include<stdio.h>
#define SIZE 4

int reverse(int []);

int main()
{
  int arr[SIZE]={10,5,6,7};
  int i;
  printf("Elements before Reversing\n");
  for(i=0;i<SIZE;i++)
   {
     printf("%d ",arr[i]);
   }
    printf("\n\n");
 
    reverse(arr);
 
     printf("Elements after Reversing\n");
     for(i=0;i<SIZE;i++)
      {
        printf("%d ",arr[i]);
	  }
	  printf("\n\n");

return 0;
}

int reverse(int arr[])
{
   int i,j;
   int temp;
    j=SIZE-1;
   for(i=0;i<SIZE/2;i++)
    {
	  temp=arr[i];
	  arr[i]=arr[j];
	  arr[j]=temp;
	  j--;
     }
}


	  
