#include<stdio.h>
#include"myHeader.h"

void push(int *s,int *top)
{
	int element;
	if(*top==MAX-1)
	{
		printf("Stack is full\n");
		
	}
	else
	{
		printf("Enter a Elment to Insert\n");
		scanf("%d",&element);
		*top=*top+1;
		s[*top]=element;
		printf("Element Inserted \n");
		printf("\n\n");
	}
}
int pop(int *s ,int *top)
{
	int x;
	if(*top==-1)
	{
		printf("Stack is Empty\n");
		return 0;
		
	}
	else
	{
		x=s[*top];
		*top=*top-1;

		return x;
	}
}
void display(int *s,int *top)
{
	int i;
	if(*top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("Stack Elemenst are\n");

		for(i=0;i<=*top;i++)
		{
			printf("%d ",s[i]);
		}
		printf("\n\n");
	}
}

int isFull(int *top)
{
        if(*top==MAX-1)
        {
	     return 1;
	 }
	else
	{
	     return 0;
	 }
}

int isEmpty(int *top)
{
        if(*top==-1)
	{
		 return 1;
	}
	{
		return 0;
	}
}
int peak(int *s,int *top)
{
	return s[*top];

}

void reverseStack(int *s,int *top)
{
	int i;
	if(*top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
	          printf("stack elements in Reverse order\n");
	          for(i=*top;i>=0;i--)
		  {
		     
		     printf("%d ",s[i]);
		      
		  }
               printf("\n\n");
        }
}

