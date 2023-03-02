#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int age;
float salary;
char gender;
char name[40];

struct User
{
	int age;
	float salary;
	char name[40];
	char gender;
};
typedef struct User U;

int getUserDetails(int,float,char,char*);
int printUserDetails(int,float,char,char*);
int getUserDetailsStruct(U);
int printUserDetailsStruct(U);

int main()
{
	U u;
//	getUserDetails(age,salary,gender,name);
        getUserDetailsStruct(u);
	
	return 0;
}

int getUserDetails(int age ,float salary,char gender,char str[])
{
	printf("Enter gender of user\n");
	scanf("%c",&gender);
	printf("Enter the name of user\n");
	scanf("%s",str);
	printf("Enter age of User \n");
	scanf("%d",&age);
	printf("Enter the salary of user\n");
	scanf("%f",&salary);
        
	printUserDetails(age,salary,gender,name);
}
int printUserDetails(int age,float salary,char gender,char str[])
{
	printf("Name:<%s>\n",str);
	printf("Gender:<%c>\n",gender);
	printf("Age:<%d>\n",age);
	printf("Salary:<%f>\n",salary);

}

int getUserDetailsStruct(U u)
{
	printf("Enter gender of user\n");
	scanf("%c",&u.gender);
	printf("Enter name of user\n");
	scanf("%s",u.name);
	printf("Enter age of user\n");
	scanf("%d",&u.age);
	printf("Enter age of user\n");
	scanf("%f",&u.salary);

        printUserDetailsStruct(u);
}

int printUserDetailsStruct(U u)
{

	printf("Name:<%s>\n",u.name);
	printf("Gender:<%c>\n",u.gender);
	printf("Age:<%d>\n",u.age);
	printf("Salary:<%f>\n",u.salary);
}
