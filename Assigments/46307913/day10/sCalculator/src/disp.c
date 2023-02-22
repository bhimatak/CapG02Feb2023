#include<disp.h>
#include<stdio.h>
#include<stdlib.h>

char disp()
{
     char ch;

     printf("\nEnter the operation to be carried out: \n");
     printf("\nEnter,\n+. Addition\n*. Multiplication\nChoice: \n");
     scanf(" ");
     scanf("%c",&ch);
     return ch;
}

