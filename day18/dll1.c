/*
program for double linked list

*/
#include <stdio.h>
#include<stdlib.h>

typedef struct llist
{
	int val;
	struct llist *prev;
	struct llist *next;
} DLList;


void dispListF(DLList *);
void dispListB(DLList *);

DLList *insert_end(DLList*, DLList*);
DLList *insert_after(DLList*, int);
DLList *update(DLList*, int);

//void sortList(LList *);



int main()
{
	DLList *newNode=NULL, *head=NULL, *temp=NULL;

	int ch=1, key;
	

	while(ch)
	{
		
		temp = insert_end(head,temp);
		if(head == NULL)
			head = temp;

		printf("\nDo You want to add new node? (1/0): ");
		scanf("%d",&ch);



	}
	temp = head;
	dispListF(temp);
	
	dispListB(temp);
	printf("\nEnter a key to add new node after: ");
	scanf("%d",&key);

	insert_after(temp,key);
	
	dispListF(temp);
	
	printf("\nEnter a key to be Updated with New Value: ");
	scanf("%d",&key);
	
	update(temp,key);
	dispListF(temp);
	
	printf("\n\n");
	return 0;
}

void dispListF(DLList *head)
{
	printf("\n=====List in forward direction=====\n");
	while(head != NULL)
	{
		printf("%d->",head->val);
		head = head->next;
	}
	printf("\n\n");
}


void dispListB(DLList *head)
{
	printf("\n=====List in backward direction=====\n");
	while(head->next != NULL)
		head = head->next;

	do{
		printf("%d->",head->val);
		head = head->prev;
	}while(head !=NULL);

	
	printf("\n\n");
}


DLList *insert_end(DLList *head, DLList *last)
{
		DLList *newNode;
		int value;

		printf("\nEnter the value of the new node: ");
		scanf("%d",&value);

		newNode = (DLList *)malloc(sizeof(DLList));
		if(newNode == NULL)
		{
			printf("\nUnable to allocate Memory\n");
			exit(EXIT_FAILURE);
		}

		newNode->val = value;
		newNode->next = NULL;
		newNode->prev = NULL;

		
		
		if(head == NULL)
		{
			//when the list is empty/new list

			head = newNode;
			last = newNode;
			
		}
		else
		{
			last->next = newNode;
			newNode->prev = last;
			last = last->next;
			
		}
	return last;
}


DLList *insert_after(DLList *head, int key)
{
		DLList *newNode,*temp=NULL;
		DLList *last = head;
		int value, found=0;

		printf("\nEnter the value of the new node: ");
		scanf("%d",&value);

		newNode = (DLList *)malloc(sizeof(DLList));
		if(newNode == NULL)
		{
			printf("\nUnable to allocate Memory\n");
			exit(EXIT_FAILURE);
		}

		newNode->val = value;
		newNode->next = NULL;
		newNode->prev = NULL;

		
		
		if(head == NULL)
		{
			//when the list is empty/new list

			head = newNode;
			last = newNode;
			
		}
		else
		{
			//travese untill key value is reached
			while(last != NULL)
			{
				if(last->val == key){
					found = 1;
					break;
				}
				last = last->next;
			}

			if(found)
			{
				// key is present
				temp = last->next;
				last->next = newNode;
				newNode->prev = last;
				newNode->next = temp;

			}
			else
				printf("\nKey not found\n");


			
			
		}
	return last;
}



DLList *update(DLList *head, int key)
{
		DLList *temp=NULL;
		DLList *last = head;
		int value, found=0;

		
			//travese untill key value is reached
			while(last != NULL)
			{
				if(last->val == key){
					found = 1;
					break;
				}
				last = last->next;
			}

			if(found)
			{
				// key is present
				// temp = last->next;
				// last->next = newNode;
				// newNode->prev = last;
				// newNode->next = temp;
				printf("\nEnter the new value to be Updated: ");
				scanf("%d",&last->val);

			}
			else
				printf("\nKey not found\n");

		
	return last;
}


/*
void sortList(LList *head)
{

	LList *temp = NULL;
	int tempVal=0;
	while(head->next != NULL)
	{
		temp = head->next;
		while(temp != NULL){
			if(head->val > temp->val)
			{
				tempVal = head->val;
				head->val = temp->val;
				temp->val = tempVal;

			}
			temp = temp->next;	
		}

		head = head->next;

	}
}
*/