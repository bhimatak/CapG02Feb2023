#include<stdio.h>
#include<stdlib.h>
#include<myHeader.h>

int main()
{
	int n=0;
	n=inputEmployee();
	EMP *empl = (EMP *) malloc ( n * sizeof(EMP));
	
	void fileToStruct(empl,n);

	return EXIT_SUCCESS;
}

