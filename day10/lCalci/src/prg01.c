#include <stdio.h>
#include <stdlib.h>
#include <sum.h>
#include <multi.h>
#include <disp.h>


int main()
{
	int op1, op2, result=0;
	char op;
	
	#ifdef DEBUG
		printf("\nEnter two operand values: ");
		scanf("%d%d",&op1,&op2);
	#else
		printf("\nEnter one operand value: ");
		scanf("%d",&op1);
		op2=op1;
	#endif
	
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
