#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdlib.h>

int age;
float salary;
char gender;
char name[20];

struct User
{
	int age;
	float salary;
	char name[20];
	char c;
};
typedef struct User U;

int getUserDetails(int,float,char,char*);
int printUserDetails(int,float,char,char*);

int main()
{
	getUserDetails(age,gender,salary,name);
	return 0;
}

int getUserDetails(int age,float salary,char gender,char str[])
{
	printf("enter the gender of user\n");
        scanf("%c",&gender);
	printf("enter the name of user\n");
	scanf("%s",str);
	printf("enter the age of user\n");
        scanf("%i",&age);
	printf("enter the salary of user\n");
        scanf("%f",&salary);

	printUserDetails(age,salary,gender,name);
}

int printUserDetails(int age,float salary,char gender,char str[])
{
	printf("Name:<%s>\n",str);
	printf("gender:<%c>\n",gender);
	printf("age:<%d>\n",age);
	printf("salary:<%f\n",salary);
        



}
