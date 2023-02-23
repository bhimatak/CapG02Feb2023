#include <stdio.h>

int main()
{
	int arr[5][4];
	int i,j;

	for(i=0;i<2;i++)
	{
		
		printf("\nEnter the RollNo: ");
		scanf("%d",&arr[i][0]);
		printf("\nEnter the Marks (M1, M2 and M3): ");
		for(j=1;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n\nRollNo\tM1\tM2\tM3\n");
	for(i=0;i<2;i++)
	{
		
		printf("%d\t",arr[i][0]);
		for(j=1;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}