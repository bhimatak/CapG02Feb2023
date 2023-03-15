#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 81


void countstring(char *txt)
{
	int count = 0;
	char *txt1=(char *)malloc(MAXSIZE);
	strcpy(txt1,txt);
	char *token = strtok(txt1, " ");
	while(token != NULL)
	{
		token = strtok(NULL," ");
		count++;
	}
	printf("\nTotal words in the sentence are: %d\n",count);
	free(txt1);
	free(token);
}

void wordsstored(char **words,char *text)
{
	int i=0;
	char *text1=(char *)malloc(MAXSIZE);
	strcpy(text1,text);
	char *token=strtok(text1," ");
	while(token)
	{
    	words[i]=(char *)malloc(MAXSIZE);
    	strcpy(words[i],token);
    	token=strtok(NULL, " ");
    	i++;
	}
	free(text1);
	free(token);
}

void printwords(char **words)
{
	int i=0;
	printf("\nThe stored words are:\n\n");
	for(i=0;words[i]!=NULL;i++)
	{
		printf("%s\n",words[i]);
	}
}

void searchandreplace(char **words,char *sword, char *rword)
{
	int i,flags=0;
	for(i=0;words[i]!=NULL;i++)
	{
		if(strcmp(words[i],sword)==0)
		{
			strcpy(words[i],rword);
			printf("\nSuccessfully replaced\n");
			flags=1;
			break;
		}
	}
	if(flags!=1)
		printf("\nNo words found\n");
}

int main()
{
	char text[MAXSIZE];
	char sword[20];
	char rword[20];
	printf("\nEnter text (limit is 80 characters): ");
	fgets(text,MAXSIZE,stdin);
	printf("\n%s\n",text);
	countstring(text);
	char **words= (char **)malloc(MAXSIZE*sizeof(char*));
	wordsstored(words,text);
	printwords(words);
	printf("\nEnter word to search: ");
	scanf("%s",sword);
	printf("\nEnter word to replace: ");
	scanf("%s",rword);
	searchandreplace(words,sword,rword);
	printwords(words);
	free(words);
	return EXIT_SUCCESS;
}
