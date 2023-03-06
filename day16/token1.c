#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lSize 1024

void split_words(char (*)[lSize],char *, int *);

void sortWords(char (*)[lSize],int);


int main()
{
	int i;
	char *str;
	// char **Words = (char **)malloc(20 * sizeof(char*));
	// for(i=0;i<20;i++)
	// 	*(Words+i)=(char *)malloc(lSize*sizeof(char)); 

	char Words[20][lSize];

	int cWords=0;
	int it;

	str = (char *)malloc(lSize*sizeof(char));

	
	fgets(str,lSize,stdin);
	//str[strlen(str)-1]='\0';

	strcpy(str,strtok(str,"\n"));


	puts(str);

	// Words = split_words(str, &cWords); 
	split_words(Words,str,&cWords);

	for(it=0;it<cWords;it++)
		printf("\n%s",Words[it]);

	sortWords(Words, cWords);

	printf("\nAfter Sorting\n");

	for(it=0;it<cWords;it++)
		printf("\n%s",Words[it]);

	printf("\n\n");

	return 0;
}

void split_words(char (*Words)[lSize], char *str, int *ptr)
{
	// char **splits = NULL;
	int i;
	// char **splits = (char **)malloc(20 * sizeof(char*));
	// for(i=0;i<20;i++)
	// 	*(splits+i)=(char *)malloc(lSize*sizeof(char)); 

	char *tokens = strtok(str, ",");
	int spaces=0;
	int count = 0;


	// for(i=0;i<20;i++)
	// 	memset(*(splits+i),'\0',lSize); 

	while(tokens)
	{
		count++;
		// splits = realloc(splits,sizeof(char *) * ++spaces);
		++spaces;
		//memset(*(splits+count),'\0',lSize); 
		// if(!splits)
		// 	return splits;

		strcpy(Words[spaces - 1], tokens);
		tokens = strtok(NULL, ",");

	}

	*ptr = count;

	// return Words;

}


void sortWords(char (*Words)[lSize], int c)
{
	int i,j;
	int ilen=0;
	int jlen=0;
	int it;
	char *temp = (char *)malloc(lSize);
	char *str1 = (char *)malloc(lSize);
	char *str2 = (char *)malloc(lSize);
	
		

	for(i=0;i<c;i++)
	{
		for(j=i;j<c;j++)
		{
			memset(temp,'\0',lSize);
			if(strcmp(Words[i],Words[j])>0)
			{
				
				strcpy(str1, Words[i]);
				strcpy(str2, Words[j]);
				
				ilen = strlen(Words[i]);
				jlen = strlen(Words[j]);
				memset(Words[i],'\0',ilen);
				memset(Words[j],'\0',jlen);
				
				
				strcpy(Words[i],str2);
				strcpy(Words[j],str1);
				
				
				
			}
		}
	}

	// return Words;
}