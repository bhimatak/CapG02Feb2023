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
	fptr=fopen(fileName,"r");

	if(fptr == NULL)
	{
		perror("fopen error");
		exit(EXIT_FAILURE);
	}

	printf("\nFile opened successfully for read only\n");
	 
	//fscanf(fptr,"%s %c %d %f",line,&gender,&a, &b);
	
	fgets(line,1024,fptr);
	
	line[strlen(line)-1] = '\0';

	tokens = strtok(line,"|");
	strcpy(s,tokens);
	tokens = strtok(NULL,"|");
	gender = tokens[0];
	tokens = strtok(NULL,"|");
	a = atoi(tokens);
	tokens = strtok(NULL,"|");
	b = atof(tokens);
	
	
	fprintf(stdout,"\n\n%s %c %d %f\n\n",s,gender,a,b);
	
	fclose(fptr);
	printf("\n\n");
	return 0;
}