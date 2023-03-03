#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lSize 1024

char **split_words(char *, int *);

char **sortWords(char **,int);


int main()
{
	int i;
	char *str;
	char **Words = (char **)malloc(20 * sizeof(char*));
	for(i=0;i<20;i++)
		*(Words+i)=(char *)malloc(lSize*sizeof(char)); 

	int cWords=0;
	int it;

	str = (char *)malloc(lSize*sizeof(char));

	
	fgets(str,lSize,stdin);
	//str[strlen(str)-1]='\0';

	strcpy(str,strtok(str,"\n"));


	puts(str);

	Words = split_words(str, &cWords); 

	for(it=0;it<cWords;it++)
		printf("\n%s",Words[it]);

	sortWords(Words, cWords);

	printf("\nAfter Sorting\n");

	for(it=0;it<cWords;it++)
		printf("\n%s",Words[it]);

	printf("\n\n");

	return 0;
}

char **split_words(char *str, int *ptr)
{
	char **splits = NULL;
	char *tokens = strtok(str, ",");
	int spaces=0;
	int count = 0;

	while(tokens)
	{
		count++;
		splits = realloc(splits,sizeof(char *) * ++spaces);

		if(!splits)
			return splits;

		splits[spaces - 1] = tokens;
		tokens = strtok(NULL, ",");

	}

	*ptr = count;

	return splits;

}


char **sortWords(char **Words, int c)
{
	int i,j;
	int ilen=0;
	int jlen=0;
	char *temp = (char *)malloc(lSize);
	char *str1 = (char *)malloc(lSize);
	char *str2 = (char *)malloc(lSize);
	
		

	for(i=0;i<c;i++)
	{
		for(j=i;j<c;j++)
		{
			// memset(temp,'\0',lSize);
			printf("\n%s\t%s",Words[i],Words[j]);
			if(strcmp(Words[i],Words[j])>0)
			{
				printf("\nInside if st");
				strcpy(str1, Words[i]);
				strcpy(str2, Words[j]);
				memset(Words[i],'\0',lSize);
				memset(Words[j],'\0',lSize);
				
				//strcpy(temp,str1);
				strcpy(Words[i],str2);
				strcpy(Words[j],str1);
				
				/*
				ilen = strlen(Words[i]);
				jlen = strlen(Words[j]);
				memcpy(temp, Words[i], ilen);
				temp[ilen] = '\0';

				memcpy(Words[i], Words[j], jlen);
				Words[jlen] = '\0';

				memcpy(Words[j], temp, strlen(temp));
				Words[strlen(temp)] = '\0';
				*/
				printf("\nWords[i]: %s", Words[i]);
				printf("\nWords[j]: %s", Words[j]);
				printf("\ntemp: %s", temp);

				printf("\n=============\n");
				
			}
		}
	}

	return Words;
}