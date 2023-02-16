#include <stdio.h>

int main()
{
	int a,b;
	int *ptr;

	ptr = &a;
	scanf("%d",ptr);
	ptr = &b;
	scanf("%d",ptr);

	printf("\na=%d\nb=%d\n",a,b);

	return 0;
}
