#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFF 1024

int getFileStrings(char *);
void display();

char **str;
int ll = 0;

int main(int argc, char **argv)
{
	char *fileName = argv[1];
	int s;

	s = getFileStrings(fileName);
	if(s == 0)
	{
		printf("\nData successfully read and stored in the double char pointer!");
	}
	else
	{
		printf("\nError occured while reading data or writing it to the double char pointer!");
	}
	printf("\n-----------Displaying the contents stored in the double char pointer---------------");
	display();
	return EXIT_SUCCESS;
}

int getFileStrings(char *filename)
{
	FILE *fptr;
	char line[1024];
	int i;

	fptr = fopen(filename,"r");
	if(fptr == NULL)
	{
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
void display()
{
	int i;

	for(i=0;i < ll;i++)
	{
		printf("\n%s\n",str[i]);
	}
	free(str);
}
