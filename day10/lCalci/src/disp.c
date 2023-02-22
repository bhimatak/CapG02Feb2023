#include <disp.h>
#include <stdio.h>
#include <stdlib.h>

char disp()
{
	char ch;

	printf("\nEnter the operation to be caarried out: ");
	printf("\nEnter,\n+. Addition\n*. Multiplication\nChoice: ");
	scanf(" ");
	scanf("%c",&ch);
	return ch;
}