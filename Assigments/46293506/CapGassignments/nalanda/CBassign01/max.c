#include"myHeader.h"

int max(int arr[])

{
   int i,max;

   max=arr[0];
   for(i=0;i<6;i++)
   {
     if(arr[i]>max)
	  {
	    max=arr[i];
	  }
   }

   return max;

}
