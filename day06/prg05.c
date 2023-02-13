/*

do while:

	Syntax:
		do
		{
			looping block sts
		}while(cond); 


*/


#include <stdio.h>

int main()
{

	int count;

	count = 11;

	/*
	while(count<=10)
	{
		printf("\nCount=%d", count);
		count++;
	}

	*/


	
	do
	{
		printf("\nCount=%d", count);
		count++;
	}while(count<=10);
	
	
	printf("\nCount=%d (After While loop)", count);
		
	printf("\nBye\n");

	return 0;
}