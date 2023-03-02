#include<stdio.h>
#include<stdlib.h>
#include <string.h>


struct Employee {
	int id;
	char name[20];
};
typedef struct Employee EMP;

int printDetails(EMP);

int main(int argc,char **argv)
{
        
	EMP emp;
        strcpy(emp.name,argv[1]);
	emp.id = atoi(argv[2]);

	
	printDetails(emp);
	
	return(EXIT_SUCCESS);
}

int printDetails(EMP emp)
{
	printf("\nemployee name: %s",emp.name);
	printf("\nEmployee id: %d",emp.id);
	printf("\n\n");
	
}


