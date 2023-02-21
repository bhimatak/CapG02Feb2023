#include<stdio.h>

int main()
{
	int i,k=0,arr[9];

	printf("Enter the values in the array:\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<9;i++)
	{
		if(arr[i]%2==0)
		{
			arr[k]=arr[i];
			k++;
			arr[i]=0;
		}
		else
		{
			arr[i]=0;
	    }	
	}
	for(i=0;i<9;i++)
	{
		printf("\n%d",arr[i]);
	}
	printf("\n\n");
	return 0;
}
