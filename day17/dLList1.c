/*
doubly linked list

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int val;
	struct node *prev;
	struct node *next;
};

typedef struct node DLL;

void dispListF(DLL *);
void dispListB(DLL *);

DLL *insertEnd(DLL*, DLL*);



int main()
{
	DLL *head = NULL; 
	DLL *temp = NULL;

	int ch=1;

	while(ch)
	{
		temp = insertEnd(head, temp);
		if(head == NULL)
			head = temp;


		printf("\nDo you want to add one more element (1/0): ");
		scanf("%d",&ch);
	}

	temp = head;

	dispListF(temp);
	dispListB(head);

	printf("\n\n");

	return 0;

}


void dispListF(DLL *head)
{
	printf("\nList in the forward direction\n");
	while(head != NULL)
	{
		printf("%d->",head->val);
		if(head->next == NULL)
			break;
		head = head->next;
	}
	printf("\n==============\n");
}

void dispListB(DLL *head)
{
	while(head != NULL){
		if(head->next == NULL)
			break;
		head = head->next;
	}
	
	printf("\nList in the backward direction\n");
	do
	{
		printf("%d->",head->val);
		if(head->prev == NULL)
			break;
		head = head->prev;
	}while(head != NULL);

	printf("\n==============\n");
}


DLL *insertEnd(DLL *head, DLL *last)
{
	DLL *newNode;
	int value;

	printf("\nEnter the value of newNode: ");
	scanf("%d",&value);

	newNode = (DLL *)malloc(sizeof(DLL));

	if(newNode == NULL)
	{
		perror("malloc()");
		exit(EXIT_FAILURE);
	}

	newNode->val = value;
	newNode->next = NULL;
	newNode->prev = NULL;

	if(head == NULL)
	{
		/* Empty List (it ref to the first node) */

		head = newNode;
		last = newNode;
	}
	else
	{
		/* The list is present */

		last->next = newNode;
		newNode->prev = last;
		last = last->next;
	}


	return last;

}