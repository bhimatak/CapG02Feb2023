/* DMA */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=10;
	int *ptr;
	int *temp;
	
	ptr = (int *)malloc(10);  // BA=2000 - 2009
	temp = ptr; // temp => 2000 BA
	//ptr = ptr + 0; //2000
	*ptr = 10;
	printf("\nAddress of ptr=%u, address of contents=%u",&ptr,ptr);
	printf("\nco of ptr = %d",*ptr);

	ptr++; //2004
	*ptr = 20;
	printf("\nAddress of ptr=%u, address of contents=%u",&ptr,ptr);
	printf("\nco of ptr = %d",*ptr);

	ptr++; //2008
	*ptr = 30;
	printf("\nAddress of ptr=%u, address of contents=%u",&ptr,ptr);
	printf("\nco of ptr = %d",*ptr);

	ptr++; //2012
	*ptr = 40;
	printf("\nAddress of ptr=%u, address of contents=%u",&ptr,ptr);
	printf("\nco of ptr = %d",*ptr);

	printf("\nAddress of temp=%u, address of contents=%u",&temp,temp);
	ptr = temp;

	free(ptr);
	
	printf("\n\n");

	return 0;
}