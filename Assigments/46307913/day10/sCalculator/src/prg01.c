#include<stdio.h>
#include<stdlib.h>


#include <myHeader.h>
#include<sum.h>
#include<multi.h>
#include<disp.h>


int main()
{
    int op1,op2,result;
	char op;

	printf("\nEnter two operand values: \n");
	scanf("%d%d",&op1,&op2);
        
        op=disp();

	switch(op)
	{
	    case '+':
		        result=sum(op1,op2);
				printf("\nAddition of two numbers = %d\n",result);
				break;

	    case '*':
		        result=prod(op1,op2);
				printf("\nMultiplication of two numbers = %d\n",result);
				break;
        default:
		        printf("\nWrong operator entered\n");
    }
    printf("\n\n");
	return(EXIT_SUCCESS);
}

