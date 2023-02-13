/* Demo on while st

*/

#include <stdio.h>

int main()
{

	int count;

	count = 1;

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