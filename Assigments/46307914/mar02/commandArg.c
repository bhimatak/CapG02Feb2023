#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
	char Name[20];
	int id;
	long int phone;
};
typedef struct Employee EMP;

void empdetails(int c, char **argu);

int main(int argc, char** argv)
{

	empdetails(argc,argv);

	return EXIT_SUCCESS;
}

void empdetails(int count, char **argu)
{
	EMP emp1,emp2;

	strcpy(emp1.Name,argu[1]);
	emp1.id = atoi(argu[2]);
	emp1.phone = atol(argu[3]);

	strcpy(emp2.Name,argu[4]);
	emp2.id = atoi(argu[5]);
	emp2.phone = atol(argu[6]);

	printf("\n\nEmployee 1 details:\n\n");
	printf("%s\n",emp1.Name);
	printf("%d\n",emp1.id);
	printf("%ld\n",emp1.phone);

	
	printf("\n\nEmployee 2 details:\n\n");
	printf("%s\n",emp2.Name);
	printf("%d\n",emp2.id);
	printf("%ld\n",emp2.phone);
	printf("\n\n");
}
