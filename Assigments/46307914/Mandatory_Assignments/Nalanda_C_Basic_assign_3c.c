#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLEN  80
//#define MAXLEN 1024

int getFirstNames(char (*)[MAXLEN],int, char (*)[MAXLEN]);
int main()
{	
	int rowcount=4;
	char arr[][MAXLEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
	char firstnames[rowcount][MAXLEN];
	char lastnames[rowcount][MAXLEN];
	
	int n= getFirstNames(arr,rowcount,firstnames);
	
//	getLastNames(char arr[][MAX_LEN], int rowcount, char (*lastnames)[MAX_LEN]);

	return EXIT_SUCCESS;

}

int getFirstNames(char (*arr)(MAXLEN), int rowcount, char (*firstnames)[MAXLEN])
{
	int i=0;
	char *tokens;
	for(i=0;i<rowcount;i++)
	{
		tokens=strtok(arr[i],":");
		tokens=strtok(NULL,":");
		strcpy(firstnames[i],tokens);
	}
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",firstnames[i]);
	}

	return EXIT_SUCCESS;
}
