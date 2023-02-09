#include <stdio.h>

int main()
{
	int a=10;
	int b=21;
	int c=++a;

	a++;
	++b;

	printf("\na=%d\tb=%d\tc=%d\n",++a,b++,++c);

	return 0;
}
