#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node 
{
	int val;
	struct node *plink;
	struct node *nlink;
};
typedef struct node DLL;

int printListF(DLL *);
int printListB(DLL *);

DLL *insertEnd(DLL *,DLL *);
DLL *insertFront(DLL *,DLL *);
DLL *insertAfter(DLL *,int );


int main()
{
	DLL *temp=NULL;
	DLL *head=NULL;
	int ch=1;
	int key;

	while(ch)
	{
		temp = insertFront(temp,head);
		if(head == NULL)
			head = temp;

		printf("Do you want to add More Elements Y/S(1/0)\n");
		scanf("%d",&ch);
	}
	

	printListF(temp);
	printf("Enter the key to insert\n");
	scanf("%d",&key);
        insertAfter(temp,key);
	printListF(temp);
	printListB(temp);
	printf("\n\n");
  

	return 0;
}

DLL *insertEnd(DLL *temp,DLL *head)
{
	int val;
	DLL *newnode;

	newnode = (DLL *)malloc(sizeof(DLL));

	if(newnode == NULL)
	{
		perror("Malloc has Failed to allocate Memory\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter a Value\n");
	scanf("%d",&val);

	newnode->val = val;
	newnode->plink = NULL;
	newnode->nlink = NULL;

	if(head == NULL)
	{

		head = newnode;
		temp = newnode;
	}
	else
	{
		temp->nlink = newnode;
		newnode->plink = temp;
		temp = temp->nlink;
	}

	return temp;
}

int printListF(DLL *temp)
{
	printf("List Elements in forward Direction\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->val);
		if(temp->nlink==NULL)
			break;
		temp = temp->nlink;
	}
	printf("\n");

}

int printListB(DLL *temp)
{
	while(temp!=NULL)
	{
		if(temp->nlink==NULL)
			break;
		temp = temp->nlink;
	}
	printf("Elements in Backward Direction \n");
	do
	{
		printf("%d ",temp->val);
		if(temp->plink==NULL)
			break;
		temp = temp->plink;
	}while(temp!=NULL);
}

DLL *insertFront(DLL *temp,DLL *head)
{
	DLL *newnode;
	int val;

	newnode = (DLL *)malloc(sizeof(DLL));

	if(newnode == NULL)
	{
		perror("Malloc failed to allocate memoery\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter a value to add\n");
	scanf("%d",&val);
	newnode->val = val;
	newnode->plink = NULL;
	newnode->nlink =NULL;
	if(head == NULL)
	{
		head = newnode;
		temp=newnode;
	}
	else
	{
		while(temp!=NULL)
		{
			if(temp->plink==NULL)
				break;
			temp=temp->plink;
		}
		temp->plink = newnode;
		newnode->nlink = temp;
		temp =temp->plink;
		
	}
	return temp;
}

DLL *insertAfter(DLL *head,int key)
{
	DLL *temp =NULL;
	DLL *last = head;
	DLL *newnode;
	int val;
	int found=0;

	newnode = (DLL *)malloc(sizeof(DLL));
	if(newnode==NULL)
	{
		perror("MAlloc fails\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter a value to add\n");
	scanf("%d",&val);

	newnode->val = val;
	newnode->plink = NULL;
	newnode->nlink = NULL;

	if(head ==NULL)
	{
		head = newnode;
		last = newnode;
	}
	else
	{
		while(last!=NULL)
		{
			if(last->val == key)
			{
				found=1;
				break;
			}
			last =last->nlink;
		}

	if(found)
	{
		temp = last->nlink;
		last->nlink = newnode;
		newnode->plink =last;
		newnode->nlink=temp;
	}
	else
	{
		printf("Not found\n");
	}

     }
	return last;
}	

