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
			printf("\n\n1.To check stack is full || not\n2.To check stack is empty || not\n3.To print reverse order of input\n4.Exit\n\n");
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					if(isFull(top))
						printf("\nStack full!\n");
					else
						printf("\nStack not full!\n");
					break;

				case 2:
					if(isEmpty(top))
						printf("\nStack empty!\n");
					else
						printf("\nStack not empty!\n");
					break;

				case 3:
					if(sizeofstack>0)
						reverseDisplay(stack,top);
					else
					{
						printf("\n\nNo elements to print!!\n\n");	
						printf("\nThanks for using!!\n\n");
						exit(EXIT_SUCCESS);
					}
					break;

				case 4:
					
					printf("\nThanks for using!!\n\n");
					exit(EXIT_SUCCESS);

				default:
					printf("\nWrong choice!!\n");
			}
		}
	}
	else
	{
		printf("\n\nThanks for using!!\n\n");
	}

	return 0;
}
