#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	int id;
	int phNo;
	char name[50];
};

typedef struct employee EMPLOYEE;

void disp(EMPLOYEE);

int main(int argc,char **argv)
{
	EMPLOYEE EMP;
	EMP.id= atoi(argv[1]);
	EMP.phNo= atoi(argv[2]); 
	strcpy(EMP.name,argv[3]);

	disp(EMP);

	printf("\n\n");
}

void disp(EMPLOYEE EMP)
{
printf("%d\n",EMP.id);
printf("%d\n",EMP.phNo);
printf("%s\n",EMP.name);


}
