#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Emp
{
	int id;
	int age;
	char name[20];
	struct Emp *next;
};

typedef struct Emp EMP;

int main()
{
	EMP *temp=NULL;
	EMP *newnode=NULL;
	EMP *head=NULL;

	int ch=1;
	int id=0;
	int age=0;
	char name[20];
	while(ch)
	{
		printf("Enter the new Employee name\n");
	        scanf("%s",name);
		printf("Enter a new Employee id new node\n");
		scanf("%d",&id);
		printf("Enter the new Emmployee age\n");
		scanf("%d",&age);

		newnode =(EMP *) malloc(1*sizeof(EMP));
                // newNode = (LIST *) malloc(1*sizeof(LIST));
               
		if(newnode=NULL)
		{
			printf("Malloc has failed\n");
			exit(EXIT_FAILURE);

		}
		strcpy(newnode->name,name);
		newnode->age=age;
		newnode->id=id;

		newnode->next=NULL;

		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=temp->next;
		}
	       printf("do you want to continue more Y/N(1/0)\n");
	       
	
	}	       

	temp=head;
	while(temp!=NULL)
	{
		printf("\nname:%s",temp->name);
		printf("\nid %d",temp->id);
		printf("\nage %d",temp->age);
		temp =temp->next;

	}

	return 0;
}



