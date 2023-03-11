#include <stdio.h>

int main()
{

	int x=0;
	printf("\nEnter x value: ");
	scanf("%d",&x);

	if(x < 20)
		printf("\nx is less than 20");
	else if(x < 40)
		printf("\nx is less than 40");
	else
		printf("\nx is greater than 40");

	printf("\n\n");

	return 0;
}