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

}


void dispListF(DLL *head)
{
	printf("\nList in the forward direction\n");
	while(head != NULL)
	{
		printf("%d->",head->val);
		head = head->next;
	}
	printf("\n==============\n");
}

void dispListB(DLL *head)
{
	while(head != NULL)
		head = head->next;
	
	printf("\nList in the backward direction\n");
	do
	{
		printf("%d->",head->val);
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