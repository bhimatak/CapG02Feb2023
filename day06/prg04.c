#include <stdio.h>

int main()
{

	unsigned int count;

	count = -2;

	while(count<=10)
	{
		printf("\nCount=%d", count);
		//count += 1;
		//count = count + 1;
		count++;
	}

	
	printf("\nCount=%d (After While loop)", count);
		
	printf("\nBye\n");

	return 0;
}