#include<stdio.h>
#include<myHeader.h>

void push (int *s, int *top)
{
	if(isFull(*top))
	{
		printf("\nStack is full!!:");
	}
	else
	{
		int x;
		printf("\nEnter the element to be pushed: ");
		scanf("%d",&x);

		*top+=1;
		s[*top]=x;

	}
}

int pop(int *s,int *top)
{
	if(isEmpty(*top))
	{
		printf("\nStack is empty!!");
		return NULL;
	}
	else
	{
		int x;
		x=s[*top];
		*top=*top-1;
		return x;
	}
}

void display(int *s,int top)
{
	if(isEmpty(top))
	{
		printf("\nEmpty stack");
		
	}
	else
	{
		int i;
		for(i=0;i<=top;i++)
			printf("%d",s[i]);
	}
}

int isEmpty(int top)
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int isFull(int top)
{
	if(top==max-1)
		return 1;
	else
		return 0;
}

int peek(int *s,int top)
{
	if(top==-1)
	{
		printf("\nEmpty stack\n");
		return NULL;
	}
	else
		return (s[top]);
}

