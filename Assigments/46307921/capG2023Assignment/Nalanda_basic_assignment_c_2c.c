#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal
{
	char name[20];
	char gender;
	int age;
	double salary;
};
typedef struct personal PERSONAL;

char name[20];
char gender;
int age;
double salary;

int inputDataFunction();

PERSONAL * inputStructData();
void displayWOStruct();
void displayDataFunction(PERSONAL *);

int main()
{
	PERSONAL *data;
	data=(PERSONAL *)malloc(1*sizeof(PERSONAL));

	inputDataFunction();
	displayWOStruct();
	data=inputStructData();
	displayDataFunction(data);
	
	free(data);

	return EXIT_SUCCESS;
}

int inputDataFunction()
{
	int strl=0;
	printf("\n\nEnter your name:\n");
	fgets(name,20,stdin);
	strl=strlen(name);
	name[strl-1]='\0';

	printf("\nEnter your gender(M/F/O): ");
	scanf("%c",&gender);

	printf("\nEnter your age(must be >0): ");
	scanf("%d",&age);

	if(age<=0)
	{
		printf("\n\nInvalid credentials!!\n\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter your salary: ");
	scanf("%lf",&salary);
	
	return EXIT_SUCCESS;
}
void displayWOStruct()
{
	printf("\n\nDisplaying without using structure:\n\n");
	printf("\n\nName: %s\nGender: %c\nAge: %d\nMonthly Salary: %.2lf\n\n",name,gender,age,salary);
}

PERSONAL * inputStructData()
{
	PERSONAL *data;

	data=(PERSONAL *)malloc(1*sizeof(PERSONAL));

	strcpy(data->name,name);
	data->gender=gender;
	data->age=age;
	data->salary=salary;

	return data;
}

void displayDataFunction(PERSONAL *data)
{
	printf("\n\nThe details are: \n\n");
	printf("Name: %s\n",data->name);
	printf("Gender: %c\n",data->gender);
	printf("Age: %d\n",data->age);
	printf("Monthly Salary: %.2lf\n\n",data->salary);
}
