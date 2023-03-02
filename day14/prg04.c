#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[3]={1,2,3};
	int *ptr;

	ptr = &a[0]; // ptr = a;
	// ptr = (int *)malloc(1*sizeof(int));

	printf("\nBASE Address of a=%u and its value=%d",&a,a[0]);
	printf("\nptr address = %u and address ptr is pointing to=%u",&ptr,ptr);
	printf("\nco of ptr = %d",*ptr);

	*ptr = 20;
	printf("\nAddress of a=%u and its value=%d",&a,a[0]);
	
	printf("\nco of ptr = %d",*ptr);
	ptr++;
	printf("\nco of ptr = %d",*ptr);
	ptr++;
	printf("\nco of ptr = %d",*ptr);
	ptr++;
	printf("\nco of ptr = %d",*ptr);
	
	

	printf("\n\n");
	return 0;
}