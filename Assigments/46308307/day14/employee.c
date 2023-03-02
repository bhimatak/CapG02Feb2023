#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFF 1024

struct employee
{
	int id;
	float salary;
	int age;
	char name[BUFF];
};

typedef struct employee EMP;

void read(EMP *);
void disp(EMP *); 

int main()
{
	EMP *ptr;
        ptr = (EMP *)malloc(3*sizeof(EMP));
		
	read(ptr);
	disp(ptr);
	free(ptr);

	return EXIT_SUCCESS;
}

void read(EMP *emp1)
{
	int i;

	for(i=0;i<3;i++,emp1++)
	{
		printf("\nEnter employee ID:");
		scanf("%d",&emp1->id);
		printf("\nEnter salary:");
		scanf("%f",&emp1->salary);
		printf("\nEnter age:");
		scanf("%d",&emp1->age);
		printf("\nEnter your name:");
		scanf(" ");
		fgets(emp1->name,BUFF,stdin);
		emp1->name[strlen(emp1->name)-1] = '\0';
		printf("\n\n");
	}
}	

void disp(EMP *emp1)
{
	int i;

	for(i=0;i<3;i++,emp1++)
	{
		printf("\nID: %d",emp1->id);
		printf("\nName: %s",emp1->name);
		printf("\nAge: %d",emp1->age);
		printf("\nSalary: %f",emp1->salary);	
		printf("\n");
	}
	printf("\n\n");
}
	
