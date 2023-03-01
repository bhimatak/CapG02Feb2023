/*

*row1 = 3000 = allocate (3*4) = 12 =>3000 - 3011
*row2 = 5000 = allocate (3*4) = 12 =>5000 - 5011
*row3 = 7000 = 

*/



#include <stdio.h>
#include <stdlib.h>
#define row 2
#define col 3

int printList(int **);


int main()
{
	//int a[row][col] = {1,2,3,4,5,6};

	int i,j;
	int **ptr = (int **)malloc(row * sizeof(int*));
	for(i=0;i<row;i++)
		ptr[i]=(int *)malloc(col*sizeof(int)); 

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",(*(ptr+i))+j);

	printList(ptr);

	printf("\n\n");
	return 0;
}

int printList(int **a)
{
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			printf(" %d",*(*(a+i)+j));

}
