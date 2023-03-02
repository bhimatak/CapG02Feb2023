#include<stdio.h>
#include<stdlib.h>

struct employee
{
	int id;
	float salary;
	char name[50];
	struct employee *next;
};

int main()
{
	int n;
	struct employee *head = NULL, *new_employee, *temp;
	printf("\nEnter the number of employees: ");
	scanf("%d", &n);

	for(int i =0; i <n; i++)
	{
		new_employee = (struct employee*)malloc(sizeof(struct employee));
		printf("\nEnter details of employee %d:\n", i+1);
		printf("Enter id: ");
		scanf("%d", &new_employee->id);
		printf("Enter salary: ");
		scanf("%f", &new_employee->salary);
		printf("Enter name: ");
		scanf("%s", &new_employee->name);
		new_employee->next = NULL;

		if (head == NULL)
		{
			head = new_employee;
			temp= new_employee;
		}
		else
		{
			temp ->next = new_employee;
			temp = new_employee;
		}
	}

	printf("\nEmployee Details:\n");
	temp = head;
	while(temp!=NULL)
	{
		printf("\nid: %d\n",temp->id);
		printf("Salary: %.2f\n", temp->salary);
		printf("\nName: %s\n", temp->name);
		temp=temp->next;
	}

	temp=head;
	while(temp!=NULL)
	{
		head = head->next;
		free(temp);
		temp=head;
	}
	printf("\n\n");
	return 0;
}


