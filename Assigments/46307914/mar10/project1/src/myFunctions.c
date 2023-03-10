#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>

int inputEmployee()
{
 	int i,n,uid,age;
	double salary;
	char sex;
	char name[30];
	printf("\n\nEnter the number of employees:");
	scanf("%d",&n);

	FILE* fp = fopen("employeedetails.txt","w");
	if(fp == NULL)
	{
		printf("\nError in opening the file!\n");
		exit(1);
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("\nEmployee %d:\n",i+1);
		printf("\nEnter ID: ");
		scanf("%d",&uid);
		printf("\nEnter Name: ");
		scanf("%s",name);
		printf("\nEnter age: ");
		scanf("%d",&age);
		printf("\nEnter sex (M/F/O): ");
		scanf(" %c",&sex);
		printf("\nEnter salary: ");
		scanf("%lf",&salary);

		fprintf(fp,"%d\t%s\t%d\t%c\t%lf\n",uid,name,age,sex,salary);
	}
	fclose(fp);

	return n;
}

void fileToStruct(EMP *employe,int n)
{
	int i=0;
	FILE* fp = fopen("employeedetails.txt","r");
	if(fp == NULL)
	{
		printf("Error in opening file!\n");
		exit(1);
	}

	while(fscanf(fp,"%d\t%s\t%d\t%c\t%lf\n",&employe[i].uid,employe[i].name,&employe[i].age,&employe[i].sex,&employe[i].salary)==5)
	{
		
		/*printf("Employee ID: ");
		printf("%d",employe[i].uid);
		printf("\nEnter Name: ");
		printf("%s",employe[i].name);
		printf("\nEnter age: ");
		printf("%d",employe[i].age);
		printf("\nEnter sex (M/F/O): ");
		printf(" %c",employe[i].sex);
		printf("\nEnter salary: ");
		printf("%lf",employe[i].salary);
		*/
		i++;
	}
	fclose(fp);
}

void bubbleSorting(EMP *employe,int n)
{
	EMP temp;
	int i=0,j=0;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(employe[j].uid > employe[j+1].uid)
			{
				temp=employe[j];
				employe[j]=employe[j+1];
				employe[j+1]=temp;
			}
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		printf("\nEmployee ID: ");
		printf("%d",employe[i].uid);
		printf("\nEmployee Name: ");
		printf("%s",employe[i].name);
		printf("\nEmployee age: ");
		printf("%d",employe[i].age);
		printf("\nEmployee sex (M/F/O): ");
		printf(" %c",employe[i].sex);
		printf("\nEmployee salary: ");
		printf("%lf\n",employe[i].salary);
		
	}
	printf("\n\n");
}

void searchEmployee(EMP *employe,int n,int uid)
{
	int i=0,flag=0;
	for(i=0;i<n;i++)
	{
		if(employe[i].uid==uid)
		{
			printf("\nThe employee found!!");		
			printf("\nEmployee ID: ");
			printf("%d",employe[i].uid);
			printf("\nEmployee Name: ");
			printf("%s",employe[i].name);
			printf("\nEmployee age: ");
			printf("%d",employe[i].age);
			printf("\nEmployee sex (M/F/O): ");
			printf(" %c",employe[i].sex);
			printf("\nEmployee salary: ");
			printf("%lf\n",employe[i].salary);
			flag=1;
			break;
		}
	}
	if(flag!=1)
		printf("\nNo employee Found with the given EmpID!!\n\n");
}
