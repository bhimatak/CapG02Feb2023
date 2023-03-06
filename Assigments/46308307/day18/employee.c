#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define BUFF 1024

struct employee
{
	int id;
	int phoneNumber;
	char name[BUFF];
	struct employee *next;
	struct employee *prev;
};

typedef struct employee EMP;
void push();
void pop();
void display();
EMP *top = NULL;
int size = 0;

int main()
{
	int choice;

	while(1)
	{

	        printf("\n\n1.Display the nodes in the stack.\n2.Push new node in the stack.\n3.Pop the new node from the stack.\n4.EXIT\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				display();
				break;
			case 2:
				push();
				break;
			case 3:
				pop();
				break;
			case 4:

				printf("\nApplication has exited successfully!\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\nInvalid choice !Enter your choice again!!!");
		}
	}
	return EXIT_SUCCESS;
}
	void push()
	{
		EMP *newNode;
		
		if(size > MAX)
		{
			printf("/nStack is already full!");
			return;
		}
		newNode = (EMP*)malloc(sizeof(EMP));

		if(newNode == NULL)
		{
			printf("\nUnable to allocate the memory!");
			return;
		}
		else
		{
			newNode->next = NULL;
			newNode->prev = NULL;
		        printf("\nEnter the employee id:");
                	scanf("%d",&newNode->id);
                	printf("\nEnter the employee phone number:");
			scanf("%d",&newNode->phoneNumber);
                	printf("\nEnter the name of the employee:");
                	scanf(" ");
                	fgets(newNode->name,BUFF,stdin);
			size+=1;
                }
		if(top == NULL)
		{
			top = newNode;
		}
		else
		{
			newNode->prev = top;
			top->next = newNode;
			top = newNode;
		}
	}
	
	void pop()
	{
		if(top == NULL)
		{
			printf("\nStack is already empty!");
			return;
		}
		else
		{
			printf("Node deleted successfully having employee id %d",top->id);
			top = top->prev;
			top->next = NULL;
		}
	}
	
	void display()
        {
		EMP *temp;
		temp = top;
		if(top == NULL)
		{
			printf("\nStack is already empty!");
		}
		while(temp!=NULL)
		{
			printf("\nEmployee ID:%d",temp->id);
			printf("\nEmployee phone number:%d",temp->phoneNumber);
			printf("\nEmployee name:%s",temp->name);
			temp = temp->prev;
			printf("\n\n");
		}
	}

