#include<stdio.h>

int main()
{
	int arr[5],a;
	int *ptr;
	int i,j;

	ptr= arr;

	for(i=0;i<5;i++)
        {
	scanf("%d",(ptr+i));
       	}
	 
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("IN descending order: ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));
	}
}




