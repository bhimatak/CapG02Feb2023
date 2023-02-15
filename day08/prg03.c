#include <stdio.h>
#include "myHeader.h"

int main()
{

	int gNum;
	int flag = 0;
	int it;
	printf("\nEnter a Number: ");
	scanf("%d",&gNum);

	/* logic */
	/* call the function - isPrime */
	
	flag = isPrime(gNum);

	if(flag == 0)
		printf("\nGNum: %d is a Prime Number\n",gNum);
	else
		printf("\nGNum: %d is not a Prime Number\n",gNum);
	return 0;

}