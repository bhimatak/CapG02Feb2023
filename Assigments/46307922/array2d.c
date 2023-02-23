#include<stdio.h>
/*
#define row 2
#define col 2

//int row=2;
//int col=2;
int main()
{
	int arr[row][col]={{1,2},{3,4}};

	int i,j;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)

			printf("%d",arr[i][j]);
		printf("\n");
	}
	
	printf("\n\n");

	return 0;
}
*/
#define row 5
#define col 3

int main()
{
	int marks[row][col];
	int rollno[row];
	int i=0,j=0;

	for( i=0;i<row;i++){
		printf("\nEnter the roll number %d : ",i+1);
		scanf("%d",&rollno[i]);

		printf("\nEnter m1 m2 m3 marks%d : ",i+1);
		for(j=0;j<col;j++){
			scanf("%d",&marks[i][j]);
		}
	}
	printf("\nNumber \tM1\tM2\tM3\n");
	
	for(i=0;i<row;i++){
		printf("%d\t",rollno[i]);

		for(j=0;j<col;j++){
			printf("%d\t",marks[i][j]);
		}
		printf("\n");
	}

	return 0;
}


