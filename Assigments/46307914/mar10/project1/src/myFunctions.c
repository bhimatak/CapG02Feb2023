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

	for(i=0;i<n;i++)
	{
		printf("\nEmployee %d:\n",i+1);
		printf("Enter ID: ");
		scanf("%d",&uid);
		printf("\nEnter Name: ");
		scanf("%s",name);
		printf("\nEnter age: ");
		scanf("%d",&age);
		printf("\nEnter sex (M/F/O): ");
		scanf("%*c",&sex);
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
		i++;
	}
	fclose(fp);
}
