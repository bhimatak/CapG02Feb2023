#include<stdio.h>
#define SIZE 5

int sortDes(int []);

int main()
{
  int i,arr[SIZE] ={2,4,3,5,0};

  printf("ELements before sorting\n");

  for(i=0;i<SIZE;i++)
   {
     printf("%d ",arr[i]);
    }
	printf("\n\n");
    sortDes(arr);

    printf("ELements before sorting\n");
    for(i=0;i<SIZE;i++)
	{
     printf("%d ",arr[i]);
	 }
	printf("\n\n");
 return 0;
}
 
 int sortDes(int arr[])
 {
   int i,j;
   int temp;

   for(i=0;i<SIZE-2;i++)
   {
     for(j=0;j<SIZE-2-i;j++)
	   {
	     if(arr[j]<arr[j+1])
		  {
		     temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;
		  }
        }
  }
  }
