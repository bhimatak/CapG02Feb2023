#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=10;
	int *ptr;

	//ptr = &a;
	ptr = (int *)malloc(1*sizeof(int));

	printf("\nAddress of a=%u and its value=%d",&a,a);
	printf("\nptr address = %u and address ptr is pointing to=%u",&ptr,ptr);
	printf("\nco of ptr = %d",*ptr);

	*ptr = 20;
	printf("\nAddress of a=%u and its value=%d",&a,a);
	printf("\nco of ptr = %d",*ptr);
	

	printf("\n\n");
	return 0;
}