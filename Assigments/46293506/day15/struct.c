#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
	int no;
	char name[100];
};

typedef struct Employee EMP;

int sortEmpName(EMP *);
int getEmpDet(EMP *);
int printEmpDet(EMP *);

int main()
{
	EMP emp[4];

	getEmpDet(emp);
	printEmpDet(emp);
        sortEmpName(emp);
	printEmpDet(emp);


	return 0;
}

int getEmpDet(EMP emp[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("\n name:");
		scanf("%s",emp[i].name);
		printf("\n id:");
		scanf("%d",&emp[i].no);
		
	}
	printf("\n");
}

int printEmpDet(EMP emp[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("name:%s \n",emp[i].name);
		printf("id:%d\n",emp[i].no);
	}
}

int sortEmpName(EMP emp[])
{
	int i,j;
	EMP temp;
	printf("After sorting\n");

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(strcmp(emp[i].name,emp[j].name)>0)
			{
				strcpy(temp.name,emp[i].name);
				strcpy(emp[i].name,emp[j].name);
				strcpy(emp[j].name,temp.name);
			}
		}
	}
}

