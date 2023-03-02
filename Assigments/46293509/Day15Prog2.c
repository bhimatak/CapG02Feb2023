#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
	int Id;
	int Salary;
	char Name[20];
};

typedef struct employee EMPLOYEE;

void disp(EMPLOYEE);

int main(int argc, char **argv)
{
	EMPLOYEE EMP;

	EMP.Id = atoi(argv[1]);
        EMP.Salary = atoi(argv[2]);
	strcpy(EMP.Name,argv[3]);

	disp(EMP);

	printf("\n\n");
	exit(EXIT_SUCCESS);

}

void disp(EMPLOYEE EMP)
{
	printf("%d\n",EMP.Id);
	printf("%d\n",EMP.Salary);
	printf("%s\n",EMP.Name);
}
