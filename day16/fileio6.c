#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *fptr;
	char *fileName = argv[1];
	char line[1024];//="Bhimashankar";
	char s[1024];
	int a;
	float b;
	char gender;
	char *tokens;
	fptr=fopen(fileName,"r+");

	if(fptr == NULL)
	{
		perror("fopen error");
		exit(EXIT_FAILURE);
	}

	printf("\nFile opened successfully for read only\n");
	 
	printf("\nFile pointer is @ %ld position", ftell(fptr));
	fscanf(fptr,"%[^|]s",s);

	fprintf(stdout,"\n\n%s\n",s);
	printf("\nFile pointer is @ %ld position", ftell(fptr));
	fseek(fptr,1,SEEK_CUR);
	fprintf(fptr,"F");
	rewind(fptr);
	fseek(fptr,5,SEEK_CUR);
	fprintf(fptr,"Bhima");
	fseek(fptr,-9,SEEK_CUR);
	fprintf(fptr,"MIT");


	
	
	fclose(fptr);
	printf("\n\n");
	return 0;
}