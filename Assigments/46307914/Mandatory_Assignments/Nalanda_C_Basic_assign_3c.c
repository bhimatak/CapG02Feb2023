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
	
	int n= getFirstNames(arr,rowcount,firstnames);
	
	getLastNames(arr,rowcount,lastnames);

	return EXIT_SUCCESS;

}

int getFirstNames(char (*arr)(MAXLENGTH), int rowcount, char (*firstnames)[MAXLENGTH])
{
	int i=0;
	char *tokens;
	for(i=0;i<rowcount;i++)
	{
		tokens=strtok(arr[i],":");		
		strcpy(firstnames[i],tokens);
	}
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",firstnames[i]);
	}

	return EXIT_SUCCESS;
}

int getLastNames(char (*arr)(MAXLENGTH), int rowcount, char (*Lastnames)[MAXLENGTH])
{
	istnt i=0;
	char *tokens;
	for(i=0;i<rowcount;i++)
	{
		tokens=strtok(arr[i],":");		
		tokens=strtok(NULL,'\0');
		strcpy(Lastnames[i],tokens);
	}
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",Lastnames[i]);
	}

	return EXIT_SUCCESS;
}
