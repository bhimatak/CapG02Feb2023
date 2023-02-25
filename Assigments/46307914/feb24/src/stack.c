#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>

int main()
{
	int stack[max];
	int top;
	int x;
	int choice;
	top=-1;

	while(1)
	{
		printf("\n1.push\n2.pop\n3.display\n4.peek\n5.check if stack is empty\n6.check if stack is full\n7.Exit\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				push(stack,&top);
				break;
			case 2:
				x=pop(stack,&top);
				if(x!=NULL)
					printf("\nPopped element is %d",x);
				break;
			case 3:
				display(stack,top);
				break;
			case 4:
				x=peek(stack,top);
				printf("\nTop most element is %d",x);
				break;
			case 5:
				if(isEmpty(top))
					printf("\nStack is empty");
				else
					printf("\nStack is not empty");
				break;
			case 6:
				if(isFull(top))
					printf("\nStack is full");
				else
					printf("\nStack is not full");
				break;
			case 7:
				exit(EXIT_SUCCESS);
			default:
				printf("\nWrong choiceeeeeeee");
		}

	}

	return 0;

}
