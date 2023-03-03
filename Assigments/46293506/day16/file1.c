#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char **argv)
{
	FILE *p;
	char *ptr =argv[1];
        char line[1024];

	p=fopen(ptr,"w");
          
	if(p==NULL)
	{
		fprintf(stderr,"\nError in finding a file\n");
		perror("open file");
		return EXIT_FAILURE;
	}
	printf("file opened sccesfull\n");
	fscanf(stdin,"%[^\n]s",line);
        fprintf(p,"%s",line);



	fclose(p);


	return 0;
}
