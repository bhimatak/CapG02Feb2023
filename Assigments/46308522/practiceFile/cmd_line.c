#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct employee
{
	int id;
	int sal;
	char name[20];


};

typedef struct employee EMPLOYEE;

void disp(EMPLOYEE);
int main(int argc, char **argv)
{
	EMPLOYEE EMP;

	EMP.id = atoi(argv[1]);
	EMP.sal = atoi(argv[2]);
	strcpy(EMP.name,argv[3]);

	disp(EMP);
	

	printf("\n\n\n");
	exit(EXIT_SUCCESS);

}

void disp(EMPLOYEE EMP)
{
	printf("%d\t",EMP.id);
	printf("%d\t",EMP.sal);
	printf("%s\t",EMP.name);
}

