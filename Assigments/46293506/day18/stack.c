#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int push(int *,int *);
int pop(int *,int *);
void display(int *,int *);

int main()
{
	int arr[SIZE];
        int top=-1;
	int ch,ch1=1;
	while(ch1)
	{
		printf("\n Enter \n 01.PUSH \n 02.POP \n03.DISPLAY \n04:EXIT \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(arr,&top);
			       break;
			case 2:pop(arr,&top);
			       break;
			case 3:display(arr,&top);
			       break;
			case 4:return EXIT_SUCCESS;

			default: printf("Wrong Choice\n");
                }
	        printf("Do you want continue with Stack Operation Y/N(1/0) \n");
		scanf("%d",&ch1);
         }

	return 0;
}

int push(int *arr,int *top)
{
	int elem;
	

	if(*top == (SIZE -1))
	{
		printf("STACK IS FULL\n");
	}
	else
	{
         	printf("Enter a Element to Insert\n");
	        scanf("%d",&elem);
		*top =*top + 1;
		arr[*top] = elem;
		printf("Element Inserted\n");
	}
}
int pop(int *arr,int *top)
{
	if(*top == -1)
	{
		printf("STCAK IS EMPTY\n");
	}
	else
	{
		printf("Element Deleted\n");
		*top = *top -1;

	}
}
void display(int *arr,int *top)
{
	int i;
	if(*top==-1)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
		for(i=0;i<=*top;i++)
	        {
		       printf("%d ",arr[i]);
		}
	}
	printf("\n\n");
}
    	
	
