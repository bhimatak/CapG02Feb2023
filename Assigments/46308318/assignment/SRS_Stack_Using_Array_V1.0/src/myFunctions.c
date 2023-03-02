#include<myHeader.h>
#include<stdio.h>

void push(int *arr,int *TOP)
{
	int data;
	if(isFull(TOP))
	{
		printf("\nStack is overflow!");
	}
	else
	{
		*TOP+=1;
		printf("\n Enter the data to be pushed in the stack:");
		scanf("%d",&data);
		arr[*TOP]=data;
		printf("\n%d pushed successfully at the top!",data);
	}
}
void pop(int *arr,int *TOP)
{
	if(isEmpty(TOP))
	{
		printf("\nStack Underflow!");
	}
	else
	{
		printf("%d popped successfully!",arr[*TOP]);
		*TOP-=1;
	}
}
void display(int *arr,int *TOP)
{
	int index;
	for(index=*TOP;index>=0;index--)
	{
		printf("%d\t",arr[index]);
	}
}
int isEmpty(int *TOP)
{
	if(*TOP==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(int *TOP)
{
	if(*TOP==(MAX-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void peek(int *arr, int *TOP)
{
	printf("%d is the top element in the stack\n",arr[*TOP]);
}
