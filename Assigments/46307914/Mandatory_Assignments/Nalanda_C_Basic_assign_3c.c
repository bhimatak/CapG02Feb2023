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
	
	int k= getLastNames(arr,rowcount,lastnames);

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
		tokens=strtok(NULL,":");
		printf("\n%d.%s\n\n",i,tokens);
		//strcpy(firstnames[i],tokens);
	}
	printf("\n\nFirst Names:\n");
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",firstnames[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}

int getLastNames(char (*arr)[MAXLENGTH], int rowcount, char (*lastnames)[MAXLENGTH])
{
	int i=0;
	printf("\ncheck1\n");
	char *tokens;

	for(i=0;i<rowcount;i++)
	{
	printf("\nChgeck2\n");
		
		tokens=strtok(arr[i],":");
		printf("\n%s\n",tokens);
		printf("\ncheck3\n");
		if(tokens == NULL)
			return EXIT_FAILURE;
		printf("\nCheck4\n");
		tokens=strtok(NULL,":");
		printf("\ncheck5\n");
		//strcpy(lastnames[i],tokens);
		printf("\nCheck 6\n");
		printf("\n%d.%s\n\n",i,tokens);
	}
	printf("\n\nlast Names:\n");
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",lastnames[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
/*int getLastNames(char (*arr)[MAXLENGTH], int rowcount, char (*lastnames)[MAXLENGTH])
{
	int i=0;
	char *tokens;
	for(i=0;i<rowcount;i++)
	{
		tokens=strtok(arr[i],":");		
	//	if(tokens == NULL)
	//		return EXIT_FAILURE;
		tokens=strtok(NULL,":");
		//strcpy(lastnames[i],tokens);
		printf("\n%s\n",tokens);
	}
	printf("\n\nLast names:\n");
	for(i=0;i<rowcount;i++)
	{
		printf("\n%s\n",lastnames[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;*/
}
