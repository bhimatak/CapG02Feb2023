#include<stdio.h>
#include<stdlib.h>

struct node
{
	int a;
        struct node *next;
};
typedef struct node NODE;

int main()
{
	NODE *temp=NULL;
	NODE *head=NULL;
	NODE *newnode=NULL;

	int ch=1;
	int a;
        while(ch)
	{
	        printf("enter a value  to add\n");
	        scanf("%d",&a);
		
		newnode=(NODE *)malloc(1*sizeof(NODE));
		if(newnode==NULL)
		{
			printf("Mollac fails\n");
	        }

		newnode->a=a;
		newnode->next=NULL;

		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp = temp->next;
		}
		printf("Do you want add Element Y/N (1/0)\n");
		scanf("%d",&ch);
	}

	temp=head;
	while(temp!=NULL)
        {
		printf("%d ",temp->a);
		temp =temp->next;
	}
	printf("\n\n");

	free(newnode);

	return 0;
}


