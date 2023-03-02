#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFF 1024

struct employee
{
	int id;
	int phoneNumber;
	char name[BUFF];
};

typedef struct employee EMP;

void disp(EMP); 

int main(int argc,char **argv)
{
		
	EMP emp1;

        emp1.id = atoi(argv[1]);
	emp1.phoneNumber = atoi(argv[2]);
	strcpy(emp1.name,argv[3]);
	disp(emp1);

	return EXIT_SUCCESS;
}


void disp(EMP emp1)
{

		printf("\nID: %d",emp1.id);
		printf("\nPhone Number: %d",emp1.phoneNumber);
		printf("\nName: %s",emp1.name);
		printf("\n");
}
	
