#include<stdio.h>
#include<stdlib.h>

#define MAX 5

struct node
{
	int val;
	struct node *next;
};
typedef struct node STACK;

STACK *head=NULL;
int sCount=0;

int push();
int pop();
void display();

int main()
{
	int ch1=1,ch;
	while(ch1)
	{
		printf("Wel-Come To STACK DATA STRUCTURE\n");
		printf("\nEnter \n 1. PUSH() \n 2.POP() \n 3.Display() \n 4.Exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:exit(EXIT_FAILURE);
			default:printf("Wrong Choice\n");
		}
		printf("Do you want to continue with stack Operation Y/N(1/0)\n");
		scanf("%d",&ch1);
	}
	printf("Thank you\n");

	return 0;
}
int push()
{
	int val;
	STACK *newnode;

	if(sCount==MAX)
	{
		printf("Stack is Full\n");
		exit(EXIT_FAILURE);
	}

	newnode = (STACK *)malloc(sizeof(STACK));
	if(newnode==NULL)
	{
		perror("Malloc fails\n");
	}
         
        printf("Enter value:\n");
	scanf("%d",&val);
	newnode->val =val;
	newnode->next = NULL;

	if(head==NULL)
	{
		head = newnode;
		sCount++;
	}
	else
	{
		newnode->next = head;
		head = newnode;
		sCount++;
	}
	printf("Elemented Inserted\n");
}

int pop()
{
	STACK *temp;
	if(sCount==0)
	{
		printf("STACK IS EMPTY\n");
		exit(EXIT_FAILURE);
	}
	printf("Deleted Element is %d\n",head->val);
	temp=head;
	head=head->next;
	sCount--;

	free(temp);
}

void display()
{
	if(sCount==0)
	{
		printf("stack is Empty\n");
	}
	else
	{
		printf("Stack Elements are\n");
	        while(head!=NULL)
	        {
		       printf("%d ",head->val);
		       head =head->next;
	         }
	}
	printf("\n");

}
