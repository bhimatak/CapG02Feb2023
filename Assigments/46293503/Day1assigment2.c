#include<stdio.h>
int main()
{
	int arr[1024];
        int range,i,j,temp=0;
	printf("\n\n enter size of array: \n\n");
	scanf("%d",&range);
	printf("\n\n enter the array elements: \n");
	for(i=0;i<range;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<range;i++)
	{
		for(j=i;j<range-1;j++)
		{
			arr[j]=arr[j+1];
		}

	}
	printf("\n output:\n");
	for(i=0;i<range/2;i++)
	{
		printf("\n%d",arr[i]);
	}
	printf("\n\n");
	return 0;
}

