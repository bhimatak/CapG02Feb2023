#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXLENGTH 80

int getFirstNames(char (*)[MAXLENGTH],int, char (*)[MAXLENGTH]);

int	getLastNames(char (*)[MAXLENGTH],int, char (*)[MAXLENGTH]);

int main()
{	
	int rowcount=4;
	char arr[][MAXLENGTH]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	char firstnames[rowcount][MAXLENGTH];
	char lastnames[rowcount][MAXLENGTH];
	
	getFirstNames(arr,rowcount,firstnames);
	
	getLastNames(arr,rowcount,lastnames);

	return EXIT_SUCCESS;

}

int getFirstNames(char (*arr)[MAXLENGTH], int rowcount, char (*firstnames)[MAXLENGTH])
{
	int i=0;
	char *tokens;
	for(i=0;i<rowcount;i++)
	{
		
		tokens=strtok(arr[i],":");	
		if(tokens == NULL)
			return EXIT_FAILURE;
		strcpy(firstnames[i],tokens);
	}

	printf("\n\nFirst Names:\n");
	
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",firstnames[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}

int getLastNames(char (*arr)[MAXLENGTH], int rowcount, char (*Lastnames)[MAXLENGTH])
{
	int i=0;

	char *tokens;

	for(i=0;i<rowcount;i++)
	{
		tokens=strtok(arr[i],":");
		if(tokens == NULL)
			return EXIT_FAILURE;
		tokens=strtok(NULL,":");
		strcpy(Lastnames[i],tokens);
	}
	printf("\n\nlast Names:\n");
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",Lastnames[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
