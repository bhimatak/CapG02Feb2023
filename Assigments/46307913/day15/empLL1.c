#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct emp 
{
        int eid;
	float esal;
	int ephNo;
	char ename[30];
        struct emp *next;
};


typedef struct emp EMP;

int main()
{
        EMP *newNode = NULL; //=> wild ptr;
        EMP *head = NULL;
        EMP *temp = NULL;

        int id,phNo,ch=1;
	float sal;
	char name[30];

        while(ch)
        {
		printf("\nEnter the employee name:\n ");
		scanf("%s",name);

                printf("\nEnter the employee Id:\n ");
                scanf("%d",&id);
                
		printf("\nEnter the employee salary:\n ");
		scanf("%f",&sal);

		printf("\nEnter the employee phonenumber:\n ");
		scanf("%d",&phNo);

                newNode = (EMP *) malloc(1*sizeof(EMP));

                if(newNode == NULL)
                {
                        printf("\nmalloc() - failed\n");
                        exit(EXIT_FAILURE);
                }
		strcpy(newNode->ename,name);

                newNode->eid = id;
                newNode->next = NULL;

                newNode->esal=sal;
		newNode->next=NULL;

		newNode->ephNo=phNo;
		newNode->next=NULL;

                if(head == NULL)
                {
                        //List is empty
                        head = newNode;
                        temp = newNode;
                }
		else
		{
			temp->next = newNode;
			temp = temp->next;
		}


		printf("\nDo you want to add more elems (1/0)");
		scanf("%d",&ch);
	}

	temp = head;
	while(temp != NULL)
	{
		printf("\nEMployee Name: \n");
		printf("%s",temp->ename);

		printf("\nEmployee ID: \n");
		printf("%d",temp->eid);

		printf("\nEmployee salary: \n");
		printf("%f",temp->esal);

		printf("\nEmployee phonenumber: \n");
		printf("%d",temp->ephNo);

		temp = temp->next;
	}


	printf("\n\n");
	return 0;
}
