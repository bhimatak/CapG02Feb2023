/* DMA */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=10;
	int *ptr;
	
	int ch=1;
	while(ch){
		printf("\nAddress of a =%u and value =%d",&a,a);
		
		ptr = (int *)malloc(1*sizeof(int));
		*ptr = 10;
		printf("\nAddress of ptr=%u, address of contents=%u",&ptr,ptr);
		printf("\nco of ptr = %d",*ptr);
		free(ptr);
		//printf("\nDo you want to continue? (1/0): ");
		//scanf("%d",&ch);
	}
	

	
	printf("\n\n");

	return 0;
}
