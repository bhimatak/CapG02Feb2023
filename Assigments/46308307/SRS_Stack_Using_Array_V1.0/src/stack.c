/*This is a menu driven application which calls push,pop,peek,display,isEmpty and isFull functions to carry out the stack operations using array.*/

#include<stdio.h>
#include<myHeader.h>
#include<stdlib.h>

int main()
{
	int TOP = -1,bool;
	int choice,arr[MAX];

	while(1)
	{

	        printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.To check if stack is empty\n6.To check if stack is full\n7.EXIT\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(arr,&TOP);
				break;
			case 2:
				pop(arr,&TOP);
				break;
			case 3:
				display(arr,&TOP);
				break;
			case 4:
				peek(arr,&TOP);
				break;
			case 5:
				bool=isEmpty(&TOP);
				if(bool==1)
				{
					printf("\nStack is Empty!");
				}
				else
				{
					printf("\nStack is not empty!");
				}
				break;
			case 6:
				bool=isFull(&TOP);
				if(bool==1)
				{
					printf("\nStack is full!");
				}
				else
				{
					printf("\nStack is not full!");
				}
				break;
			case 7:

				printf("\nApplication has exited successfully!\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice !Enter your choice again!!!");
		}
	}

	return(EXIT_SUCCESS);
}
