#include<stdio.h>
int main()
{

		int age;
		float salary;
		short desigcode;
		char gender;
		char username[125];
		printf("\nEnter details: \n");


		printf("\nUsername: ");
		scanf("%s",username);

		printf("\nAge: ");
		scanf("%d",&age);

		printf("\nSalary: ");
		scanf("%f",&salary);

		printf("\nDesignation code: ");
		scanf("%hi",&desigcode);

		printf("\nGender(M/F/O): ");
		scanf("%c",gender);


		printf("\n----The details are----\n");
		printf("\nUsername: %s");
		printf("\nAge: %d");
		printf("\nSalary: %f");
                printf("\nDesignation Code: %hi");
		printf("\nGender: %c");

		printf("\n\n");
		return 0;
}
