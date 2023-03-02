#include <stdio.h>
#include <stdlib.h>

struct UserInfo
{
	char name[50];
   	char gender;
	int age;
	float salary;
};

struct UserInfo user1;

int readUserInfo()
{
	printf("\nEnter your name: ");
	fgets(user1.name, sizeof(user1.name), stdin);

	printf("\nEnter your gender (M/F/O): ");
	scanf("%c", &user1.gender);

	printf("\nEnter your age: ");
	scanf("%d", &user1.age);

	printf("\nEnter your monthly salary: ");
	scanf("%f", &user1.salary);

	while ((getchar()) != '\n');
		return EXIT_SUCCESS;
}

void displayUserInfo()
{
	printf("\nName: %s", user1.name);
	printf("\nGender: %c\n", user1.gender);
	printf("\nAge: %d\n", user1.age);
	printf("\nMonthly Salary: %.2f\n", user1.salary);
}

struct UserInfo readUserInfoToStruct()
{
	struct UserInfo user1;

	printf("\nEnter your name: ");
	fgets(user1.name, sizeof(user1.name), stdin);

	printf("\nEnter your gender (M/F/O): ");
	scanf("%c", &user1.gender);

	printf("\nEnter your age: ");
	scanf("%d", &user1.age);

	printf("\nEnter your monthly salary: ");
	scanf("%f", &user1.salary);

	while((getchar())!='\n');
		return user1;
}

void displayUserInfoFromStruct(struct UserInfo user1)
{
	printf("\nName: %s", user1.name);
	printf("\nGender: %c\n", user1.gender);
	printf("\nAge: %d\n", user1.age);
	printf("\nMonthly Salary: %.2f\n", user1.salary);
}

int main()
{
	readUserInfo();
	displayUserInfo();
	struct UserInfo user2 = readUserInfoToStruct();
	displayUserInfoFromStruct(user2);

    return EXIT_SUCCESS;
}
