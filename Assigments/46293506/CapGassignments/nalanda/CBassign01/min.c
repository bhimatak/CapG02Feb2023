#include"myHeader.h"

int min(int arr[])

{
  int i,min;

  min=arr[0];

  for(i=0;i<6;i++)
  {
    if(arr[i]<min)
	 {
	   min=arr[i];
	 }
  }
  return min;
 }
