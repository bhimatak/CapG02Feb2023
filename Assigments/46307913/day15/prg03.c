#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
		char name[40];
		int eID;
		float salary;
};

typedef struct employee emp;

void print(emp);
int main(int argc, char **argv)
{
		emp EMP;

	    strcpy(EMP.name,argv[1]);
		EMP.eID=atoi(argv[2]);
		EMP.salary=atoi(argv[3]);

		 strcpy(EMP.name,argv[4]);
                EMP.eID=atoi(argv[5]);
                EMP.salary=atoi(argv[6]);

		 strcpy(EMP.name,argv[7]);
                EMP.eID=atoi(argv[8]);
                EMP.salary=atoi(argv[9]);

		print(EMP);


        printf("\n\n");
        exit(EXIT_SUCCESS);
}

void print(emp EMP)
{
		printf("\n%s\n",EMP.name);
		printf("\n%d\n",EMP.eID);
		printf("\n%f\n",EMP.salary);
	
		 printf("\n%s\n",EMP.name);
                printf("\n%d\n",EMP.eID);
                printf("\n%f\n",EMP.salary);
		 printf("\n%s\n",EMP.name);
                printf("\n%d\n",EMP.eID);
                printf("\n%f\n",EMP.salary);
}

