#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct Name
{
	char firstname[20];
	char middlename[20];
	char lastname[20];
}NAME;

typedef struct PERSON
{
	NAME name;
	char gender;
	int age;
	float salary;
}PERSON;

void getdetails(PERSON *person);
void dispdetails(PERSON person);

int main()
{
	PERSON person;

	getdetails(&person);

	dispdetails(person);

	return 0;
}

void getdetails(PERSON *person)
{
	char fullname[60];

	printf("\nEnter full name separated with spaces:");
	fgets(fullname,59,stdin);
	sscanf(fullname,"%s %s %s",person->name.firstname,person->name.middlename,person->name.lastname);
	
	printf("\nEnter gender (M/F/O):");
	scanf(" ");
	scanf("%c",&person->gender);
	
	printf("\nEnter age:");
	scanf("%d",&person->age);
	
	printf("\nEnter salary:");
	scanf("%f",&person->salary);
}

void dispdetails(PERSON person)
{
	printf("\nName : %s %s %s\n",person.name.firstname, person.name.middlename ,person.name.lastname);
	printf("\nGender : %c\n",person.gender);
	printf("\nAge : %d\n",person.age);
	printf("\nSalary : %f\n",person.salary);
}



