#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct persinfo
{
	char sex;
	int age;
	double salary;
	long int phNo;
	char name[30];
};
typedef struct persinfo PERSINFO;

char sex;
int age;
float salary;
long int phNo;
char name[30];

int inputDataFunction();

PERSINFO * ipData();
void dispWOStruct();
void dispDataFunction(PERSINFO *);

int main()
{
	PERSINFO *info;
	info=(PERSINFO *)malloc(1*sizeof(PERSINFO));

	inputDataFunction();
	dispWOStruct();
	info=ipData();
	dispDataFunction(info);
	
	free(info);

	return EXIT_SUCCESS;
}

int inputDataFunction()
{
	int strl=0;
	printf("\n\nEnter name:\n");
	fgets(name,30,stdin);
	strl=strlen(name);
	name[strl-1]='\0';

	printf("\nEnter gender(M/F/O): ");
	scanf("%c",&sex);

	printf("\nEnter age(must be >0): ");
	scanf("%d",&age);

	if(age<=0)
	{
		printf("\nInvalid Age!!!!\n");
		exit(EXIT_FAILURE);
	}

	printf("\nEnter your salary: ");
	scanf("%f",&salary);

	printf("\nEnter phonenumber: "); 
	scanf("%ld",&phNo);
	
	return EXIT_SUCCESS;
}
void dispWOStruct()
{
	printf("\n\nDisplaying without using structure:\n\n");
	printf("\n\nName: %s\nGender: %c\nAge: %d\nSalary: %f\nPhoneNumber: %ld\n",name,sex,age,salary,phNo);
}

PERSINFO * ipData()
{
	PERSINFO *info;

	info=(PERSINFO *)malloc(1*sizeof(PERSINFO));

	strcpy(info->name,name);
	info->sex=sex;
	info->age=age;
	info->salary=salary;
        info->phNo=phNo;
	return info;
}

void dispDataFunction(PERSINFO *info)
{
	printf("\n\nThe details are: \n\n");
	printf("Name: %s\n",info->name);
	printf("Gender: %c\n",info->sex);
	printf("Age: %d\n",info->age);
	printf("Salary: %f\n",info->salary);
	printf("PhoneNumber: %ld\n",info->phNo);
}
