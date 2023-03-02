#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal
{
	int age;
	float salary;
	char name[50];
	char gender;
};
typedef struct personal PERSONAL;

char name[50];
char gender;
int age;
float salary;

int inputDataFunction();

PERSONAL * inputStructData();
void displayWOStruct();
void displayDataFunction(PERSONAL *);

int main()
{
	PERSONAL *info;
	info=(PERSONAL *)malloc(1*sizeof(PERSONAL));

	inputDataFunction();
	displayWOStruct();
	info=inputStructData();
	displayDataFunction(info);
	
	free(info);

	return EXIT_SUCCESS;
}

int inputDataFunction()
{
	int strl=0;
	printf("\nEnter name:\n");
	fgets(name,50,stdin);
	strl=strlen(name);
	name[strl-1]='\0';

	printf("\nEnter your gender(M/F/O): ");
	scanf("%c",&gender);

	printf("\nEnter your age(must be >0): ");
	scanf("%d",&age);

	if(age<=0)
	{
		printf("\nInvalid credentials!!\n\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter your salary: ");
	scanf("%f",&salary);
	
	return EXIT_SUCCESS;
}
void displayWOStruct()
{
	printf("\nDisplaying without using structure:\n");
	printf("\nName: %s\nGender: %c\nAge: %d\nMonthly Salary: %f\n",name,gender,age,salary);
}

PERSONAL * inputStructData()
{
	PERSONAL *info;

	info=(PERSONAL *)malloc(1*sizeof(PERSONAL));

	strcpy(info->name,name);
	info->gender=gender;
	info->age=age;
	info->salary=salary;

	return info;
}

void displayDataFunction(PERSONAL *info)
{
	printf("\n\nThe details are: \n\n");
	printf("Name: %s\n",info->name);
	printf("Gender: %c\n",info->gender);
	printf("Age: %d\n",info->age);
	printf("Monthly Salary: %.2lf\n\n",info->salary);
}
