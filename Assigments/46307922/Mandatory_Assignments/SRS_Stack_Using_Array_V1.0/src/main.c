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
			printf("\n\n1.To check stack is full or not\n2.To check stack is empty or not\n3.To print reverse order of input\n4.Exit\n\n");
			scanf("%d",&choice);

			switch(choice)
			{
				case 1:
					if(isFull(top))
						printf("\nStack is full!\n");
					else
						printf("\nStack is not full!\n");
					break;

				case 2:
					if(isEmpty(top))
						printf("\nStack is empty!\n");
					else
						printf("\nStack is not empty!\n");
					break;

				case 3:
					if(sizeofstack>0)
						reverseDisplay(stack,top);
					else
					{
						printf("\n\nNo elements available to print!!\n\n");	
						printf("\nThankyou for using the application!!\n\n");
						exit(EXIT_SUCCESS);
					}
					break;

				case 4:
					
					printf("\nThankyou for using the application!!\n\n");
					exit(EXIT_SUCCESS);

				default:
					printf("\nWrong choice!!!!\n");
			}
		}
	}
	else
	{
		printf("\n\nThankyou for using the application!!\n\n");
	}

	return 0;
}
