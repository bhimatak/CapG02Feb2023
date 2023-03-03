#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(int arg,char **argv)
{
	FILE *ptr;
	char *filename;
	filename=argv[1];
	char *token;
	char s[20];
        char line[1024];
	char c[20];
	int a;
	float f;
	ptr = fopen(filename,"r");
        if(ptr==NULL)
	{
		perror("FILE OPEN ERROR\n");
		return EXIT_FAILURE;
	}

	printf("FILE OPENED SUCCESFULLY\n");

	fgets(line,1024,ptr);
        
	line[strlen(line)-1]='\0';
	token=strtok(line,"|");
	strcpy(s,token);
	token = strtok(NULL,"|");
	strcpy(c,token);
	token = strtok(NULL,"|");
	a=atoi(token);
	token = strtok(NULL,"|");
	f =atof(token);

	fprintf(stdout,"%s %s %d %f ",s,c,a,f);

	fclose(ptr);

	return 0;
}




			

