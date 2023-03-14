#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFF 1024

int readStrFromFile(char *);
void displayString();

char **str;
int ll = 0;

int main(int argc, char **argv)
{
	char *fileName = argv[1];
	int s;

	s = readStrFromFile(fileName);
	if(s == 0)
	{
		printf("\nData successfully read");
	}
	else
	{
		printf("\nError occured while reading data");
	}

	displayString();
	return EXIT_SUCCESS;
}

int readStrFromFile(char *filename)
{
	FILE *fptr;
	char line[1024];
	int i;

	fptr = fopen(filename,"r");
	if(fptr == NULL)
	{
		perror("File open error\n");
		return EXIT_FAILURE;
	}
	while(fgets(line,BUFF,fptr)!=NULL)
	{
		ll++;
	}
	rewind(fptr);
	str = (char **)malloc(ll*sizeof(char *));
	for(i=0;i<ll;i++)
	{
		str[i] = (char *)malloc(BUFF*sizeof(char));
	}
	i = 0;
	while(fgets(line,BUFF,fptr)!=NULL) 
	{
		strcpy(str[i],line);
		i++;
	}
	fclose(fptr);
	return EXIT_SUCCESS;
}
void displayString()
{
	int i;

	for(i=0;i < ll;i++)
	{
		printf("\n%s\n",str[i]);
	}
	free(str);
}

