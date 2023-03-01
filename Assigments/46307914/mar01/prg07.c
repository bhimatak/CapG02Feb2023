#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Employee
{
	int id;
	long int phone;
	double salary;
	char Name[20];
};

typedef struct Employee EMPLOYEE;

int main()
{
	EMPLOYEE *ptr, *temp, *temp2;
	int n,i,j;

	printf("\n\nEnter the number of Employees: ");
	scanf("%d",&n);

	ptr = (EMPLOYEE *)malloc(n*sizeof(EMPLOYEE));
	temp = ptr;
	temp2= (EMPLOYEE *)malloc(sizeof(EMPLOYEE));

	for(i=0;i<n;i++, ptr++)
	{
		printf("\nEnter Employee %d details!!",i+1);
		printf("\nName: ");
		scanf("%s",ptr->Name);
		printf("\nID: ");
		scanf("%d",&ptr->id);
		printf("\nPhone: ");
		scanf("%ld",&ptr->phone);
		printf("\nSalary: ");
		scanf("%lf",&ptr->salary);

	}
	ptr = temp;

	printf("\nEmployee Details:\n");
	for(i=0;i<n;i++,ptr++)
	{
		printf("\nName: ");
		printf("%s",ptr->Name);
		printf("\nID: ");
		printf("%d",ptr->id);
		printf("\nPhone: ");
		printf("%ld",ptr->phone);
		printf("\nSalaray: ");
		printf("%lf",ptr->salary);
		printf("\n==================\n");
	}
	ptr=temp;

	for(i=0;i<n;i++)
	
	{
		for(j=i;j<n;j++)
		{
			if(strcmp((ptr+i)->Name,(ptr+j)->Name)>0)
			{
				strcpy(temp2->Name,(ptr+i)->Name);
				temp2->id=(ptr+i)->id;
				temp2->phone=(ptr+i)->phone;
				temp2->salary=(ptr+i)->salary;

				strcpy((ptr+i)->Name,(ptr+j)->Name);
				(ptr+i)->id=(ptr+j)->id;
				(ptr+i)->phone=(ptr+j)->phone;
				(ptr+i)->salary=(ptr+j)->salary;
				
				strcpy((ptr+j)->Name,temp2->Name);
				(ptr+j)->id=temp2->id;
				(ptr+j)->phone=temp2->phone;
				(ptr+j)->salary=temp2->salary;
			}
		}
	}
	printf("\nEmployee Details:\n");
	for(i=0;i<n;i++,ptr++)
	{
		printf("\nName: ");
		printf("%s",ptr->Name);
		printf("\nID: ");
		printf("%d",ptr->id);
		printf("\nPhone: ");
		printf("%ld",ptr->phone);
		printf("\nSalaray: ");
		printf("%lf",ptr->salary);
		printf("\n==================\n");
	}
	ptr = temp;

	free(ptr);
	printf("\n\n");
	return 0;
}
