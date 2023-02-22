#include<stdio.h>


int main()
{
	int marks[5][4],i,j;

	printf("\nEnter the roll no.:");
    for(i=0;i<5;i++)
	{
	    printf("\nEnter the roll no.:");
		scanf("%d",&marks[i][0]);
		for(j=1;j<4;j++)
		{
			printf("\nEnter the marks(M1,M2 AND M3):");
			scanf("%d",&marks[i][j]);
		}
	}
	printf("Roll no.\tM1\tM2\tM3\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",marks[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}

