#include <stdio.h>

int main()
{
	int a=1000,b=30,c=200;

	int res=0;

	res = (a>b)?((a>c)?a:c):((b>c)?b:c);

	printf("\nResult=%d\n",res);

	return 0;
}
