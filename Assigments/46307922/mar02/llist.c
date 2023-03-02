#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee
{
	int id;
	char name[20];
	struct Employee *next;
}EMPLOYEE;

int main()
{
	EMPLOYEE *head=NULL;
	EMPLOYEE *new_emp=NULL;
	EMPLOYEE *current_emp=NULL;
	
	int id;
	int ch=1;
	char name[20];

	while(ch)
	{
		new_emp=(EMPLOYEE *)malloc(1*sizeof(EMPLOYEE));

		printf("\nEnter EmpID: ");
		scanf("%d",&id);
		new_emp->id=id;
	 
		printf("\nEnter Empname: ");
		scanf("%s",name);
		strcpy(new_emp->name,name);

		new_emp->next=NULL;

		if(head==NULL)
			head=new_emp;
		else
		{
			current_emp=head;
			while(current_emp->next != NULL)
			{
				current_emp=current_emp->next;
			}
			current_emp->next=new_emp;
		}

		printf("\nWant to continue: (1/0)");
		scanf("%d",&ch);
	}

	current_emp=head;
	printf("\nEmployee Details:");
	while(current_emp != NULL)
	{
		printf("\nEmpID-> %d, EmpName: %s \n",current_emp->id,current_emp->name);
		
		current_emp = current_emp->next;
	}

	return 0;
}
