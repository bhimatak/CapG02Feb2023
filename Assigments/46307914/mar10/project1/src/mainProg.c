#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>

int main()
{
	int n=0,suid=0;
	n=inputEmployee();
	EMP *empl = (EMP *) malloc ( n * sizeof(EMP));
	
	fileToStruct(empl,n);
	bubbleSorting(empl,n);
	printf("\nEnter employee ID to search: ");
	scanf("%d",&suid);

	searchEmployee(empl,n,suid);
	return EXIT_SUCCESS;
}

