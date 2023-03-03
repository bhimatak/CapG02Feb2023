#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *fptr;
	char *fileName = argv[1];
	char line[1024]="Bhimashankar";
	int a=10;
	float b=23.33;
	char gender='x';

	fptr=fopen(fileName,"w");

	if(fptr == NULL)
	{
		perror("fopen error");
		exit(EXIT_FAILURE);
	}

	printf("\nFile opened successfully for write only\n");
	 
	fprintf(fptr,"%s %c %d %f",line,gender, a, b);

	fclose(fptr);
	printf("\n\n");
	return 0;
}