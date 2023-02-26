#include<stdio.h>

int evnOdd(int []);

int main()
{ 
 
  int arr[100];
  int i,value;
  for(i=0,value=25;i<100;i++,value++)
  {
     arr[i]=value;
  }
  evnOdd(arr);

  return 0;
 
 }

int evnOdd(int arr[])
{
   
   int arr1[50];
   int arr2[50];
   int i;
   int j=0;
   int k=0;
   for(i=0;i<100;i++)
     {
	    if((arr[i]%2)==0)
		{
		   arr1[j]=arr[i];
		   j++;
		}
		else
		{
		   arr2[k]=arr[i];
		   k++;
		}
    }
	 printf("EVEN ELEMENTS\n");

     for(i=0;i<50;i++)
     {
	   printf("%d ",arr1[i]);
	 }
     printf("\n\n");

	 printf("ODD ELEMENTS\n");
     for(i=0;i<50;i++)
     {
       printf("%d ",arr2[i]);
     } 

int evnOdd(int arr[])
{

   int arr1[50];
   int arr2[50];
   int i;
   int j=0;
   int k=0;
   for(i=0;i<100;i++)
     {
            if((arr[i]%2)==0)
                {
                   arr1[j]=arr[i];
                   j++;
                }
                else
                {
                   arr2[k]=arr[i];
                   k++;
                }
    }
         printf("EVEN ELEMENTS\n");

     for(i=0;i<50;i++)
     {
           printf("%d ",arr1[i]);
         }
     printf("\n\n");

         printf("ODD ELEMENTS\n");
     for(i=0;i<50;i++)
     {
       printf("%d ",arr2[i]);
     }

   printf("\n\n");
return 0;

   printf("\n\n");
return 0;

}

