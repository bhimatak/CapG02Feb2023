#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee
{
	int age;
	double salary;
	char name[20];
	char gender;
}EMPLOYEE;

int age;
double salary;
char name[20];
char gender;

int inputDataFunction();

EMPLOYEE * inputStructData();
void displayData();
void displayStructData(EMPLOYEE *);

int main()
{
	EMPLOYEE *data;
	data=(EMPLOYEE *)malloc(1*sizeof(EMPLOYEE));
	inputDataFunction();
	displayData();
    data=inputStructData();
	displayStructData(data);

    free(data);

    return EXIT_SUCCESS;
}

int inputDataFunction()
{
	int strl=0;
	printf("\nEnter your name:");
	fgets(name,50,stdin);
	strl=strlen(name);
	name[strl-1]='\0';

	printf("\nEnter your gender(M/F/O): ");
	scanf("%c",&gender);

	printf("\nEnter your age(only positive values >0): ");
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
void displayData()
{
	printf("\nDisplaying the Data:");
	printf("\nName: %s\nGender: %c\nAge: %d\nMonthly Salary: %.2lf\n\n",name,gender,age,salary);
}

EMPLOYEE * inputStructData()
{  
	EMPLOYEE *data;

	data=(EMPLOYEE *)malloc(1*sizeof(EMPLOYEE));
	strcpy(data->name,name);
	data->gender=gender;
    data->age=age;
    data->salary=salary;

    return data;
}

void displayStructData(EMPLOYEE *data)
{
	 printf("\nEmployee details: \n");
     printf("Name: %s\n",data->name);
	 printf("Gender: %c\n",data->gender);
	 printf("Age: %d\n",data->age);
	 printf("Monthly Salary: %.2lf\n\n",data->salary);
}


