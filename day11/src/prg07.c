/*

BA of arr = 2000
arr[0] => 2000
arr[1] => 2002

arr[2][2] => its has 4 ints



*/

#include <stdio.h>

#define row 2
#define col 2

// int row = 2;
// int col = 2;

int main()
{
	int arr[row][col];// = {{1,2},{3,4}};

	int i,j;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&arr[i][j]);
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf(" %d",arr[i][j]);
		printf("\n");
		
	}
	

	printf("\n\n");
	return 0;

}