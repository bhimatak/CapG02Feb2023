#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Employee
{
	int id;
	long int phone;
	double salary;
	char Name[20];
	struct Employee *next;
};

typedef struct Employee EMP;

int main()
{
	EMP *newNode=NULL;
	EMP *head=NULL; 
	EMP *temp=NULL;

	int id;
	char Name[20];
	long int phone;
	double salary;
	int ch=1;

	while(ch)
	{
		printf("\nEnter Employee details!!");
		printf("\nName: ");
		scanf("%s",Name);
		printf("\nID: ");
		scanf("%d",&id);
		printf("\nPhone: ");
		scanf("%ld",&phone);
		printf("\nSalary: ");
		scanf("%lf",&salary);

		newNode = (EMP *)malloc(1*sizeof(EMP));
		
		if(newNode == NULL)
		{
			printf("\nmalloc() - failed\n");
			exit(EXIT_FAILURE);
		}
		
		strcpy(newNode->Name,Name);
		newNode->id=id;
		newNode->phone=phone;
		newNode->salary=salary;
		newNode->next=NULL;

		if(head==NULL)
		{
			head=newNode;
			temp=newNode;
		}
		else
		{
			temp->next=newNode;
			temp=temp->next;
		}

		printf("\nDo you want to add more(1/0)\n");
		scanf("%d",&ch);

	}

	temp=head;

	printf("\nEmployee Details:\n");
	
	while(temp!=NULL)
	{
		
		printf("\nName: ");
		printf("%s",temp->Name);
		printf("\nID: ");
		printf("%d",temp->id);
		printf("\nPhone: ");
		printf("%ld",temp->phone);
		printf("\nSalaray: ");
		printf("%lf",temp->salary);
		printf("\n==================\n");
		temp=temp->next;
	}

	printf("\n\n");

	return 0;
}
