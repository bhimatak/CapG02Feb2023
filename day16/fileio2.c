#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *fptr;
	char *fileName = argv[1];
	char line[1024];
	fptr=fopen(fileName,"r");

	if(fptr == NULL)
	{
		perror("fopen error");
		exit(EXIT_FAILURE);
	}

	printf("\nFile opened successfully\n");

	// fscanf(fptr,"%[^\n]s",line);

	while(fgets(line,1024,fptr))
		puts(line);

	fclose(fptr);
	printf("\n\n");
	return 0;
}