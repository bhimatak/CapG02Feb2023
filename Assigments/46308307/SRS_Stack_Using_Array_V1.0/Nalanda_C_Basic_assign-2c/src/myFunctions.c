/*This sub program contains the definition of read and disp where user inputs the name, gender, age and salary..*/
#include<myHeader.h>
#include<stdio.h>

int read()
{
	printf("\nEnter your name:");
	scanf(" ");
	fgets(name,BUFF,stdin);
	printf("\nEnter your gender(M/F):");
	scanf("%c",&gender);
	while(1)
	{
		printf("\nEnter your age:");
		scanf("%d",&age);
		if(age > 0)
		{
			break;
		}
		else
		{
			printf("\nAge should be greater than 0! Enter your age again.");
		}
	}
	printf("\nEnter your monthly salary:");
	scanf("%f",&salary);
	return EXIT_SUCCESS;
}

void disp()
{
	printf("\nName: %s",name);
	printf("\nGender: %c",gender);
	printf("\nAge: %d", age);
	printf("\nMonthly Salary: %f",salary);
}

EMP readStructure()
{

	printf("\nEnter your name:");
	scanf(" ");
	fgets(emp1.name,BUFF,stdin);
	printf("\nEnter your gender(M/F):");
	scanf("%c",&emp1.gender);
	while(1)
	{
		printf("\nEnter your age:");
		scanf("%d",&emp1.age);
		if(emp1.age > 0)
		{
			break;
		}
		else
		{
			printf("\nAge should be greater than 0! Enter your age again.");
		}
	}
	printf("\nEnter your monthly salary:");
	scanf("%f",&emp1.salary);
	return emp1;
}

void dispStructure()
{
	printf("\nName: %s",emp1.name);
	printf("\nGender: %c",emp1.gender);
	printf("\nAge: %d",emp1.age);
	printf("\nMonthly Salary: %f",emp1.salary);
}
