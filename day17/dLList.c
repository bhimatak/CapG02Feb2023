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


int main()
{
	DLL n1,n2,n3;

	DLL *ptr;

	//creating a node need to done

	n1.val = 10;
	n1.prev = NULL;
	n1.next = NULL;

	n2.val = 20;
	n2.prev = NULL;
	n2.next = NULL;

	n3.val = 30;
	n3.prev = NULL;
	n3.next = NULL;

	// make a realtion ship

	n1.next = &n2;
	n2.next = &n3;

	n2.prev = &n1;
	n3.prev = &n2;

	//traversing through the list
	ptr = &n1;

	printf("\nPrint the list in forward direction\n");
	/*
	printf("%d->",ptr->val);

	ptr = ptr->next;

	printf("%d->",ptr->val);

	ptr = ptr->next;
	
	printf("%d->",ptr->val);

	//ptr = ptr->next;

	*/
	while(ptr != NULL)
	{
		printf("%d->",ptr->val);
		if(ptr->next == NULL)
			break;
		ptr = ptr->next;
	}
	
	if(ptr->next == NULL)
		printf("NULL");
	printf("\n Traverse in the reverse direction\n");

	printf("%d->",ptr->val);
	ptr = ptr->prev;
	printf("%d->",ptr->val);
	ptr = ptr->prev;
	printf("%d->",ptr->val);
	if(ptr->prev == NULL)
		printf("NULL");





	printf("\n\n");


}