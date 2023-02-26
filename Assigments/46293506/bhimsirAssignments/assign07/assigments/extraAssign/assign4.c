#include<stdio.h>

int kthRotation(int,int[]);

int main()
{
   int num;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   printf("Enter a Number\n");
   scanf("%d",&num);
   kthRotation(num,arr);
   return 0;
}

int kthRotation(int k,int arr[])
{
   int i,j;
   for (int j = 0; j < k; j++)
    {
        int end = arr[9];
         for(int i = 9; i > 0; i--)
	     {
            arr[i] = arr[i - 1];
		}
        arr[0] = end;
	}
    for(i=0;i<9;i++)
	 {
	     printf("%d ",arr[i]);
     }
   return 0;
  }
