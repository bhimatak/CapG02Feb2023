#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 1

int printFName(char [][MAX_LENGTH]);


int main()
{
	char arr[4][MAX_LENGTH];
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<MAX_LENGTH;j++)
		{
			printf("Enter name\n");
			scanf("%s",(*(arr + i)+j));
		}
	}
	printFName(arr);

	return 0;

}

int printFName(char str[][MAX_LENGTH])
{
	int i,j;
	char *token;
	for(i=0;i<4;i++)
	{		
	     token = strtok(str[i]," ");
	     printf("%s",str);
	}
	

}

