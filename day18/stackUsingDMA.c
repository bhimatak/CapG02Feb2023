/*
   Demo on stack operations
   - using  list
*/


#include <stdio.h>
#include<stdlib.h>

#define MAX 5


typedef struct Node
{
	int val;
	struct Node *next;
} NODE;

NODE *head=NULL;
int bottom=-1;
int top;
int scount=0;


void push();
void pop();
void dispElemts();

int main()
{
	int ch=1;
	top = bottom;
	head = NULL;

	while(1){
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Display");
		printf("\n4. Exit");
		printf("\nchoice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("\nStack Elements are\n");
				dispElemts();
				break;
			case 4:
				printf("\nProgram Ends\n");
				exit(EXIT_SUCCESS);
				break;
			default:
				printf("\nEnter the correct choice");
		}
		
			
	}

	printf("\n\n");
	return 0;
}


void push()
{
	int val;

	if(scount == MAX){
		printf("\nStack is full\n");
		return;
	}
	NODE *sptr = (NODE *)malloc(sizeof(NODE));
	if(sptr == NULL)
	{
		printf("\nUnable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter the value to be pushed: ");
	scanf("%d",&val);
	
	if(head == NULL)
	{
		sptr->val = val;
		sptr->next = NULL;
		head = sptr;
		scount++;

	}
	else
	{
		sptr->val = val;
		sptr->next = head;
		head = sptr;
		scount++;
	}

	
}


void pop()
{
	NODE *temp=NULL;

	if(head == NULL)
	{
		printf("\nStack is Empty");
		return;
	}

	printf("\nPoped out element is: %d", head->val);
	temp = head;
	head = head->next;

	free(temp);

}


void dispElemts()
{
	
	NODE *temp = head;

	if(head == NULL)
	{
		printf("\nStack is Empty\n");
		return;
	}

	while(temp != NULL)
	{
		printf("\n%d",temp->val);
		temp = temp->next;
	}

	
}