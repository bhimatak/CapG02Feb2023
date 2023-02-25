#include<stdio.h>

int main()
{
	int student[5][4];
	int i=0,j=0;

	for(i=0;i<5;i++)
	{
		printf("\nEnter the roll no:");
		scanf("%d",&student[i][0]);

		for(j=1;j<4;j++)
		{
			printf("\nEnter m%d mark:",j);
			scanf("%d",&student[i][j]);
		}
	}
	printf("\n");


	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d",student[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;

}
