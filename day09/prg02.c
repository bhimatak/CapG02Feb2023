#include <stdio.h>

int main()
{
	/*
	int qty=155;
	int *ptr;

	ptr = &qty;

	printf("%d\n",*ptr);
	*/

	const int qty = 101;
	int *ptr;
	
	ptr = &qty;

	printf("%d\n",*ptr);
	*ptr = 155;

	printf("%d\n",qty);
	
	return 0;
}
