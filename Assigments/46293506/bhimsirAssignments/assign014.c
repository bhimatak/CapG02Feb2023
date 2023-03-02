#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employe
{
	int id;
	int salary;
	int phno;
	char emailId[20];
	char name[20];
	char address[20];
};
typedef struct employe EMP;

int printDetails(EMP *);
int getDetails(EMP *);

int main()
{
	EMP emp[3];
	printDetails(emp);

	return 0;
}

int getDetails(EMP *emp)
{
	int i;
        int noEmp;
	EMP *ptr;
	EMP *temp;

	printf("Enter Number of employe'sn");
	scanf("%d",&noEmp);
        
	ptr = (EMP *)malloc(noEmp*sizeof(EMP));
        temp=ptr;
	for(i=0;i<noEmp;i++)
	{
		printf("\nEnter employee %d name:",i);
		scanf("%s",ptr->name);
		printf("\n enter employee %d Id:",i);
		scanf("%d",&ptr->id);
		printf("\n enter employee %d address:",i);
		scanf("%s",ptr->address);
		
		printf("\n enter employee %d Email id:",i);
		scanf("%s",ptr->emailId);
		printf("\n enter employee %d slary",i);
		scanf("%d",&ptr->salary);
		ptr++;
      }
}

int printDetails(EMP emp[])
{
	int i;
	EMP *ptr;
	getDetails(emp);
        for(i=0;i<3;i++)
		printf("\nEnter employee %d name:",i);
		scanf("%s",ptr->name);

}

