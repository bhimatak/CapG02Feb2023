#include<stdio.h>
#define A_SIZE 11

int main()
{
	int i,j,temp=0,arr[A_SIZE],count=1,size,k;

	printf("Enter the kth value for the array:");
	scanf("%d",&k);
	printf("Enter eleven  values in the array:\n");
	for(i=0;i<A_SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The values after processing are:\n");
	for(i=0;i<A_SIZE;i++)
	{
		if(count==k)
		{
			for(j=i;j>=temp;j--)
			{
				printf("%d\t",arr[j]);
			}
			temp=i+1;
			count=0;
		}
		count++;
		if(i==A_SIZE-1)
		{
			for(j=temp;j<A_SIZE;j++)
			{
				printf("%d\t",arr[j]);
			}
		}
	}
	printf("\n\n");
	return 0;
}
