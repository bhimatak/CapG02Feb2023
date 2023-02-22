#include<stdio.h>
#include<stdlib.h>


#include <myHeader.h>

int sum(int op1,int op2)
{
    return(op1-op2);
}

int prod(int op1,int op2)
{
    return(op1*op2);
}

char disp()
{
     char ch;

     printf("\nEnter the operation to be carried out: \n");
     printf("\nEnter,\n+. Addition\n*. Multiplication\nChoice: \n");
     scanf(" ");
     scanf("%c",&ch);
     return ch;
}


