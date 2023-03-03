#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define len 1024

void spilitWords(char(*)[len],char *,int *);
void sortWords(char(*)[len],int);

int main()
{
	char word[20][len];
	char *str;
	int cWords=0;
	int i;
	
	str =(char *)malloc(len);

	printf("Enter a sentence\n");
	fgets(str,len,stdin);

	strcpy(str,strtok(str,"\n"));
        puts(str);

	spilitWords(word,str,&cWords);
	for(i=0;i<cWords;i++)
	{
		printf("%s\n",word[i]);
		
	}
	sortWords(word,cWords);

	printf("After sorting\n");
	for(i=0;i<cWords;i++)
	{
		printf("%s\n",word[i]);
	}

	
	return 0;
}

void spilitWords(char (*word)[len],char *str,int *ptr)
{
	char *token;
	int count =0;
	int space =0;

	token = strtok(str," ");

	while(token!=NULL)
	{
		
		strcpy(word[space],token);
		token = strtok(NULL," ");
		space++;
		count++;
	}
      *ptr= count;
}

void sortWords(char (*word)[len],int c)
{
	int i,j;
	char temp[len];
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(strcmp(word[i],word[j])>0)
			{
				strcpy(temp,word[i]);
				strcpy(word[i],word[j]);
				strcpy(word[j],temp);
			}
		}
	}
}



