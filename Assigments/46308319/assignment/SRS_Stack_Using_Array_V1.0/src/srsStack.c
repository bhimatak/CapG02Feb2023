#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>

int main()
{
	int stack[size];
	int top;
	int choice;
	int sizeofstack;
	top=-1;
	
	sizeofstack=getInput(stack,&top);
	if(sizeofstack!=-1)
	{
		while(1)
		{
			printf("\n\n1.To Check Stack is Full or not\n2.To Check Stack is Empty or not\n3.To Print Reverse Order of Input\n4.Exit\n\n");
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					if(isFull(top))
						printf("\nStack is full\n");
					else
						printf("\nStack is not full\n");
					break;

				case 2:
					if(isEmpty(top))
						printf("\nStack is empty\n");
					else
						printf("\nStack is not empty\n");
					break;

				case 3:
					if(sizeofstack>0)
						reverseDisplay(stack,top);
					else
					{
						printf("\n\nNo Elements Available to Print\n\n");	
						printf("\nThank you for using the Application\n\n");
						exit(EXIT_SUCCESS);
					}
					break;

				case 4:
					
					printf("\nThank you for using the Application\n\n");
					exit(EXIT_SUCCESS);

				default:
					printf("\nWrong Choice!\n");
			}
		}
	}
	else
	{
		printf("\n\nThank you for using the Application\n\n");
	}

	return 0;
}
