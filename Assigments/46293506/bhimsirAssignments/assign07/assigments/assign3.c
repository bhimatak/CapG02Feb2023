#include<stdio.h>

int revArr(int []);

int main()
{ 

  int i,arr[4]={1,2,3,4};
  printf("\n ELEMENTS BEFORE REVERSING\n");
      for(i=0;i<3;i++)
       {
          printf("arr[%d]:%d\n",i,arr[i]);
      }
	  revArr(arr);

  return 0;
}

int revArr(int arr[])
 {
   int i;
   int j;
   int arr1[4];
   j=0;
   for(i=2;i>=0;i--)
    {
	   arr1[j]=arr[i];
	   j++;
	}
    printf("\n ELEMENTS AFTER REVERSING\n");
    for(i=0;i<3;i++)
     {
	    printf("arr[%d]:%d\n",i,arr1[i]);
     }
   return 0;
   }
