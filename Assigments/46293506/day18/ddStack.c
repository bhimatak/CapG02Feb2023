#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5

struct node
{
	int id;
	float salary;
	char name[20];
	char gender[2];
	struct node *nlink;
	struct node *plink;
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
	int id;
	float salary;
	char name[20],gender[2];
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
         
        printf("Enter name:\n");
	scanf("%s",name);
        printf("Enter gender:\n");
	scanf("%s",gender);
        printf("Enter id:\n");
	scanf("%d",&id);
        printf("Enter salary:\n");
	scanf("%f",&salary);

	strcpy(newnode->name,name);
	strcpy(newnode->gender,gender);
	newnode->id = id;
	newnode->salary =salary;
	newnode->plink=NULL;
	newnode->nlink=NULL;

	if(head==NULL)
	{
		head = newnode;
		sCount++;
	}
	else
	{
		newnode->nlink = head;
		head->plink =newnode;
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
	printf("Employee Details Deleted is %s\n",head->name);
	temp=head;
	head=head->nlink;
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
		       printf("\nname: %s ",head->name);
		       printf("\ngender: %s ",head->gender);
		       printf("\nid: %d ",head->id);
		       printf("\nsalary: %f ",head->salary);
		       if(head->nlink==NULL)
			       break;
		       head =head->nlink;
	         }
	}
	printf("\n");

}
