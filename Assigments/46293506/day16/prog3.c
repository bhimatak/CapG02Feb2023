#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int arg, char **argv)
{
	FILE *fptr;
	char *filename;
	filename = argv[1];
	char s[1024];
	fptr = fopen(filename,"r");
	if(fptr==NULL)
	{
		perror("FILE Open ERROR:");
		return EXIT_FAILURE;
	}
	printf("FILE OPENED SUCCESSFULLY TO WRITE\n");
	
	printf("Cursur is @%ld\n",ftell(fptr));

	fscanf(fptr,"%[^\n]s",s);
	fprintf(stdout,"%s",s);
	fseek(fptr,1,SEEK_CUR);

	printf("Cursur is @%ld\n",ftell(fptr));
	fclose(fptr);

	return 0;

}


