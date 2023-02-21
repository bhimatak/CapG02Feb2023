#include <myHeader.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int op1, op2, result=0;
	char op;

	printf("\nEnter two operand values: ");
	scanf("%d%d",&op1,&op2);
	
	op = disp();

	switch(op)
	{
		case '+': 
				result = sum(op1,op2);
				printf("\nAddition of two numbers = %d", result);
				break;
		case '*': 
				result = prod(op1,op2);
				printf("\nMultiplication of two numbers = %d", result);
				break;
		default:
				printf("\nWrong operator entered\n");
	}

	printf("\n\n");

	return(EXIT_SUCCESS);
}
