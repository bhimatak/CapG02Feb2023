#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee
{
	int empid;
	int salary;
	char name[30];

	struct Employee *next;

}EMP;

int main()
{
	EMP *newNode=NULL;
	EMP *head=NULL;
	EMP *temp=NULL;


	int id,sal;
	char nm[30];
	int ch=1;

	while(ch)

	{
		printf("enter the empid\n");
		scanf("%d",%id);
		printf("enter the salary\n");
		scanf("%d",&sal);
		printf("enter the empid\n");
		scanf("%s",&nm);

		newNode=(EMP *)malloc(sizeof (EMP);
		if ()newNode==NULL)
		{
			printf("Memory allocation failed");
			exit(EXIT_SUCCESS);

		}

		newNode->empid=id;
		newNode->salary=sal;
		strcpy(newNode->name,nm);
		newNode->next = NULL;

		if(head == NULL)
		{
			head=newNode;
			temp=newNode;
		}
		else
		{
			temp->next=newNode;
			temp->temp->next;
		}

		printf("Do you want to add a new record(1/0)");
		scanf("%d",&ch);
	}
		temp=head;

		while(temp !=NULL)
		{
			printf("empid = %d\n",temp->empid);
			printf("salary = %d\n",temp->salary);
			printf("name = %d\n",temp->name);
			temp=temp->next;
		}
			newNode->empid=id

			return 0;


}

