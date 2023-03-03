#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int arg,char **argv)
{
	FILE *fptr;

	char *filename = argv[1];

	char line[1024]="Shreedhar";
	int a=10;
	float f=12;
	char c='c';


	fptr = fopen(filename,"w");

	if(fptr==NULL)
	{
		perror("File open Error\n");
		return EXIT_FAILURE;
	}

	printf("FILE OPENED SUCESSFULLY\n");

	
	fprintf(fptr,"%s %d %f %c",line,a,f,c);

	fclose(fptr);
	
	return 0;
}

