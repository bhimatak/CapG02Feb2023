#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct EmployeeList
{
	int id;
	char name[40];
	long int number;
	double salary;
	struct EmployeeList *prev;
	struct EmployeeList *next;

}EMPLIST;

void push();
void pop();
void dispElements();

EMPLIST *head=NULL;




int main()
{
	int ch=1;

	head=NULL;

	while(1)
	{
		printf("\n1.To push employee detail\n");
		printf("2.To pop employee detail\n");
		printf("3.To Display all employee detail\n");
		printf("4.Exit\n");
		printf("\nEnter your choice:");
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
				printf("\n<=====Employee Details are:=====>\n");
				dispElements();
				break;

			case 4:
				printf("\nThankyou for using the app\n\n");
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
	int id;
	char name[40];
	long int number;
	double salary;
	
	EMPLIST *node=(EMPLIST *)malloc(sizeof(EMPLIST));

	if(node == NULL)
	{
		printf("\nUnable to allocate Memory\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter the details to be pushed:\n");

	printf("\nEnter the Employee ID:");
	scanf("%d",&id);

	printf("\n");

	printf("Enter the Employee Names:");
	scanf("%s",name);

	printf("\nEnter the Employee Phone number:");
	scanf("%ld",&number);

	printf("\nEnter the Employee Salary:");
	scanf("%lf",&salary);

		node->id=id;
		strcpy(node->name,name);
		node->number=number;
		node->salary=salary;
		node->prev=NULL;
		node->next=head;
		
	if(head != NULL)
	{
		head->prev=node;
	}
	head=node;

	

}

void pop()
{
	if(head == NULL)
	{
	     printf("\nStack is Empty!!\n");
	}
	else
	{
		if(head->next!=NULL)
		{
			head = head->next;
			head->prev=NULL;
		}
		else
		{
			head=NULL;
		}
	}
}
		


void dispElements()
{
	EMPLIST *temp=head;

	if(head==NULL)
	{
		printf("\nNo Employee Details available\n");
		return;
	}

	while(temp != NULL)
	{
		printf("\nEmployee ID: %d",temp->id);
		printf("\nEmployee Name: %s",temp->name);
		printf("\nEmployee Ph No: %ld",temp->number);
		printf("\nEmployee Salary: %lf",temp->salary);
		printf("\n\n");
		temp=temp->next;
	}

}

