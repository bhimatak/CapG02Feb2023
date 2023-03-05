#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node 
{
	int id;
	char name[20];
	struct node *plink;
	struct node *nlink;
};
typedef struct node NODE;

int getDetails(NODE *,NODE *,NODE *);

int main()
{
	NODE *temp=NULL;
	NODE *head=NULL;
	NODE *newnode = NULL;

	getDetails(head,temp,newnode);
	return 0;

}

int getDetails(NODE *head,NODE *temp,NODE *newnode)
{
	int ch1=1;
	int id;
	char name[20];
	while(ch1)
	{
		printf("Enter a id to add\n");
		scanf("%d",&id);
		printf("Enter a name to add\n");
                scanf("%s",name);
		newnode = (NODE *)malloc(1*sizeof(NODE));

		if(newnode==NULL)
		{
			printf("Tell Malloc Failed\n");
			return EXIT_SUCCESS;
		}

		strcpy(newnode->name,name);
		newnode->id = id;
	
		newnode->plink = NULL;
		newnode->nlink = NULL;
 
                if(head==NULL)
		{
			head = newnode;
			temp =newnode;
		}
		else
		{
			temp->nlink=newnode;
			newnode->plink=temp;
			temp = temp->nlink;
		}
		printf("Element Inserted\n");


		printf("Do you Want to add More Details Y/N(1/0)\n");
		scanf("%d",&ch1);
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->id);
		printf("%s ",temp->name);
		temp=temp->nlink;
	}
	temp=head;
	while(temp->nlink!=NULL)
	{
		temp=temp->nlink;
	}

	printf("\n");
	printf("details in reverse order\n");

	do
	{
		printf("%d ",temp->id);
		printf("%s ",temp->name);
		temp=temp->plink;
	}while(temp!=NULL);

	printf("\n");
	
	free(newnode);
	
	
}

	
