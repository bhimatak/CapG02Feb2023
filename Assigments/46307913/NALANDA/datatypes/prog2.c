#include<stdio.h>
#include<stdlib.h>

int main()
{
		char ch;
		printf("\nch: \n");
		scanf("%c",&ch);
		if((ch=='y') || (ch=='Y'))
		{
				printf("\nYes\n");
		}
		else if((ch=='n') || (ch=='N'))
		{
				printf("\nNo\n");
		}
		else
		{
				printf("\nInvalid character\n");
				exit(EXIT_FAILURE);
		}
}

