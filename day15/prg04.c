/*

Queue

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int Q[MAX];
int front;
int rear;

void dequeue();
void enqueue();
void dispList();

int main()
{

	int ch=1;
	front = 0;
	rear = front;

	while(1)
	{
		printf("\nPress\n1. Enqueue\n2. Dequeue\n3. Display List\n4. Exit");
		printf("\nChoice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
					enqueue();
					break;
			case 2:
					dequeue();
					break;
			case 3:
					dispList();
					break;
			case 4: 
					printf("\nThank you for using this SW\n");
					exit(EXIT_SUCCESS);
					break;
			default:
					printf("\nYou have enter wrong choice...");
		}
	}


	return 0;

}

void enqueue()
{
	if(rear == MAX)
	{
		printf("\nQueue is FULL\n");
		return;
	}

	printf("\nEnter the value of new element to be pushed: ");
	scanf("%d",&Q[rear++]);
}

void dequeue()
{
	if(rear == front)
	{
		printf("\nQueue is Empty");
		return ;
	}
	printf("\nDequeued out element is: %d\n",Q[front++]);
}


void dispList()
{
	int it;


	if(rear == front)
	{
		printf("\nQueue is Empty\n");
		return ;
	}

	printf("\nfront = %d\nRear=%d",front,rear);
	
	printf("\n=====List is======\n");
	for(it=front;it<rear;it++)
		printf("\n%d",Q[it]);
	printf("\n\n");
}