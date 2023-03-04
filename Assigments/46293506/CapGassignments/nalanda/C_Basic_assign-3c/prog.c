#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX_LENGTH 80

int printFName(char [][MAX_LENGTH],char [][MAX_LENGTH],int );
int printLName(char [][MAX_LENGTH],char [][MAX_LENGTH],int);

int main()
{
        char arr[][MAX_LENGTH]={"Antony:Joseph", "Lata:Mary", "Rajesh:Kumar", "Joly:Akbar"};
	int i,count=0;
	char fname[4][MAX_LENGTH];
	char lname[4][MAX_LENGTH];

	printFName(arr,fname,count);
	for(i=0;i<4;i++)
	{
	//	printf("%s\n",fname[i]);
	}
	printf("%d\n",count);
	printLName(arr,lname,count);
	for(i=0;i<4;i++)
	{
	//	printf("%s\n",lname[i]);
	}
	printf("%d\n",count);
	return 0;
}

int printFName(char (*str)[MAX_LENGTH],char(*fname)[MAX_LENGTH],int count)
{
	int i;
	char *token;
   	count =0;	
        printf("FIRST Names Are\n");
	for(i=0;i<4;i++)
	{
		token=strtok(str[i],":");
		strcpy(fname[i],token);
		count++;
	}
}

int printLName(char (*str)[MAX_LENGTH],char (*lname)[MAX_LENGTH],int count)
{
	int i;
	char *token;
	count=0;
	printf("Last Name are\n");
        token=strtok(str[i],":");
	for(i=0;i<4;i++)
	{
		printf("%s\n",token);
		token=strtok(NULL," ");
		printf("%s\n",token);
		strcpy(lname[i],token);
		count++;
	}
}

	


