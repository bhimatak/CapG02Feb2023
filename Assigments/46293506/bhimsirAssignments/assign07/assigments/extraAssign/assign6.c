#include<stdio.h>

int eqiliB(int []);

int main()
{
  int arr[10]={-7, 1, 5, 2, -4, 3, 0};
  eqiliB(arr);
  return 0;
}

int eqiliB(int arr[])
{
  int i;
  int sum;
  sum=arr[0];
  for(i=0;i<7;i++)
   { 
	 if(sum==arr[i+1])
	  {
	    printf(" %d\n ",arr[i]);
		break;
	  }
	 else
	  {
	    sum=sum+arr[i+1];
	 }
	}
return 0;
}
