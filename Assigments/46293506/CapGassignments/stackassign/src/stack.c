#include<stdio.h>
#include"myHeader.h"
#include<stdlib.h>
int main()
{
 	int stack[MAX];
	int top=-1;
	int x;
	int choice;

        printf("WELCOME TO STACK DATA STRUCTURE \n");
	printf("\n");
	while(1)
	{
		printf("ENTER \n 1.PUSH \n 2. POP \n 3. DISPLAY \n 4.ISFULL\n");
		printf("5. ISEMPTY\n 6. PEEK \n 7.display stack element in Reverse Oreder\n8.Enter 0 to EXIT FROM STACK OPERTAION\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(stack,&top);
				break;
			case 2:
				x=pop(stack,&top);
				if(x!=NULL)
				{
					printf("Poped Element is %d\n",x);
					break;
				}
				break;
			case 3:
				display(stack,&top);
				break;
			case 4:
		                x=isFull(&top);
				if(x==MAX-1)
				{
					printf("stack is full\n");
				}
				else 
					printf("stack is not full\n and still you can add %d elements",(MAX-x-1));
                                printf("\n");
				break;
			case 5:
			        x=isEmpty(&top);
				if(x==-1)
				{
					printf("stack is Empty\n");
				}
				else
					printf("stack is not Empty\n and still you can add %d elements",(MAX-x-1));

				printf("\n");
				break;
			case 6:
				x=peak(stack,&top); 
				printf("Top is @ element %d\n",x);
				break;
			case 7:
				reverseStack(stack,&top);
				break;
		        default:
                                printf("THANK YOU\n\n");
				return(EXIT_SUCCESS);
		}
	}

	return 0;
}
