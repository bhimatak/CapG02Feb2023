#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee
{
	int empid;
	int phn;
	char name[20];
	struct Employee *next;
}EMP;

int main()
{
	EMP *newNode=NULL;
	EMP *head=NULL; 
	EMP *temp=NULL;

	int empid,phn;
	char name[20];
	int ch=1;
	while(ch)
	{
		
		printf("\nEmployee Name : ");
		scanf("%s",name);
		printf("\nEmployee ID : ");
		scanf("%d",&empid);
		printf("\nEmployee Phone number : ");
		scanf("%d",&phn);

		newNode = (EMP *)malloc(1*sizeof(EMP));
		
		if(newNode == NULL)
		{
			printf("\nmalloc() is failed\n");
			exit(EXIT_FAILURE);
		}
		strcpy(newNode->name,name);
		newNode->empid=empid;
		newNode->phn=phn;
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
		printf("\nAdd another employee details (1/0)\n");
		scanf("%d",&ch);
	}
	temp=head;
	printf("\nEmployee Details :\n");
	while(temp!=NULL)
	{
		printf("\nEmployee Name : ");
		printf("%s",temp->name);
		printf("\nEmployee ID : ");
		printf("%d",temp->empid);
		printf("\nEmployee Phone number : ");
		printf("%d",temp->phn);
		printf("\n\n==================\n");
		temp=temp->next;
	}
	printf("\n");
	return 0;
}
