/*
LList.c
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int val;
	struct list *next;
}LIST;


void dispList(LIST *);

int main()
{
	LIST *newNode = NULL; //=> wild ptr;
	LIST *head = NULL; 
	LIST *temp = NULL;

	int value=0, ch=1;

	while(ch)
	{
		printf("\nEnter the value of NewNode: ");
		scanf("%d",&value);


		newNode = (LIST *) malloc(1*sizeof(LIST));

		if(newNode == NULL)
		{
			printf("\nmalloc() - failed\n");
			exit(EXIT_FAILURE);
		}

		newNode->val = value;
		newNode->next = NULL;


		if(head == NULL)
		{
			//List is empty
			head = newNode;
			temp = newNode;
		}
		else
		{
			temp->next = newNode;
			temp = temp->next;
		}


		printf("\nDo you want to add more elems (1/0)");
		scanf("%d",&ch);
	}

	temp = head;
	while(temp != NULL)
	{
		printf("%d->",temp->val);
		temp = temp->next;
	}


	printf("\n\n");
	return 0;
}


