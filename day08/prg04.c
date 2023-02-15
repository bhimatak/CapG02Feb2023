#include <stdio.h>

extern int MAX_SIZE;

int main()
{
	int arr[MAX_SIZE];
	int it;

	for(it=0;it<MAX_SIZE;it++)
		scanf("%d",&arr[it]);
	printf("\nElements are\n");	
	for(it=0;it<MAX_SIZE;it++)
		printf("%d, ",arr[it]);

	printf("\n\n");
	return 0;
}
