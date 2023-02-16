#include <stdio.h>

int main()
{
	int a[5]={10,20,22,43,55};
	int *ptr;
	
//	ptr = &a[0];
	ptr = a;
	printf("\n%d",*ptr);
	ptr++;
	//ptr = a+1;
	printf("\n%d\n",*ptr);
	ptr++;
	printf("\n%d\n",*ptr);
	
	
/*
	printf("\n%d %d %d\n",a[0],a[1],a[2]);

	printf("\na[0]=%d\n ",*(a+0));
	printf("\na[0]=%d\n ",*(a+1));
*/

	return 0;
}
