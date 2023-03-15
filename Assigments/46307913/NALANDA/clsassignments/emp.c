#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

#define EMPLOYEE_DATA 10

typedef struct
{
		int id;
		float salary;
		char name[30];
}Employee;

void emp_details(Employee *emp)
{
		printf("Enter name: \n");
		scanf("%s",emp->name);

		printf("Enter ID: ");
		scanf("%d",&emp->id);

		printf("Enter salary: ");
		scanf("%f",&emp->salary);
}

void write_file(Employee emp[])
{
		FILE *file=fopen("emp.txt","w");
		if(file==NULL)
		{
				printf("Error:File could not be opened\n");
				exit(1);
		}
		int i;
		for(i=0;i<EMPLOYEE_DATA;i++)
		{
				fprintf(file,"%s%d%f\n",emp[i].name,emp[i].id,emp[i].salary);
		}
		fclose(file);
}

void read_file(Employee emp[])
{
		FILE *file=fopen("emp.txt","r");
		if(file==NULL)
		{
				printf("Error:File could not be opened\n");
				exit(1);
		}
		int i;
		for(i=0;i<EMPLOYEE_DATA;i++)
		{
				fscanf(file,"%s%d%f\n",emp[i].name,&emp[i].id,&emp[i].salary);
		}
		fclose(file);
}

void sort(Employee emp[])
{
		int i,j;
		for(i=0;i<EMPLOYEE_DATA-1;i++)
		{
				for(j=i+1;j<EMPLOYEE_DATA;j++);
				{
						if(strcmp(emp[i].name,emp[j].name)>0)
						{
								Employee temp=emp[i];
								emp[i]=emp[j];
								emp[j]=temp;
						}
				}
		}
}

void search(Employee emp[],char *name)
{
		int i,found =0;
		for(i=0;i<EMPLOYEE_DATA;i++)
		{
				if(strcmp(emp[i].name,name)==0)
				{
						printf("Employee found: %s %d %f\n",emp[i].name,emp[i].id,emp[i].salary);
						found=1;
						break;
				}
		}
		if(!found)
		{
				printf("Employee not found\n");
		}
}

void update(Employee *emp)
{
	printf("Enter updated employee name: \n");
	scanf("%s",emp->name);

	printf("Enter updated employee ID: \n");
	scanf("%d",&emp->id);

	printf("Enter updated employee salary: \n");
	scanf("%f",&emp->salary);
}


