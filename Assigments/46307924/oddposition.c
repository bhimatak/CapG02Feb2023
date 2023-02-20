#include<stdio.h>
int main()
{
	int arr[100],num,i,b[100],a=0;
	printf("Enter the size of array:");
	scanf("%d",&num);
	printf("\nEnter the array elements:");	
	for(i=0;i<num;i++)
	{
	scanf("%d\n",&arr[i]);
	}
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
	 	 continue;
		else
		 b[a++]=arr[i];
	}
	for(i=0;i<num/2;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
	return 0;
}
