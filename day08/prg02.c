/*
Demo on functions 

program to find if the given number is prime or not

*/

#include <stdio.h>

/* declaration of Prime function */
int isPrime(int);

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



/* defination of isPrime function */

int isPrime(int num)
{
	int flag = 0;
	int it;
	//logic
	if((num == 0) || (num == 1))
		flag = 1;
	
	if(flag != 1){
		for(it = 2;it<num;it++)
		{
			if(num % it == 0)
			{
				flag = 1;
				break;
			}
		}
	}

	return flag;
}