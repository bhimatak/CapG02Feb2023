#include<stdio.h>
#include<myHeader.h>

int getInput(int stack[], int *top)
{
	int n,i;
	printf("\n\nEnter the number of elements: ");
	scanf("%d",&n);
	if(n<=size)
	{
		if(n>0)
		{
			printf("\n\nEnter the elements:\n");

			for(i=0;i<n&&n>0;i++)
			{
				scanf("%d",&stack[i]);
				*top+=1;
			}
			
		}
		return n;
	}
	else
	{
		printf("\n\nInvalid size!! size must be less than or equal to %d\n\n",size);
		return -1;
	}

}

int isFull(int top)
{
	if(top==size-1)
		return 1;
	else
		return 0;
}

int isEmpty(int top)
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void reverseDisplay(int stack[],int top)
{
	int i;
	printf("\n\nReverse order: \n\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\t",stack[i]);
	}
	printf("\n\n");
}
