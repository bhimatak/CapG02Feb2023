/*This sub program contains the definition of functions performing  operations on a sentence.*/
#include<myHeader.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void getSentence(char *mystr)
{
	printf("\nEnter a sentence:");
	scanf(" ");
	fgets(mystr,BUFF,stdin);
	mystr[strlen(mystr)-1] = '\0';
}

int dispWord(char *mystr)
{
	int i;
	int count = 0;

	for(i=0;mystr[i]!='\0';i++)
	{
		if(isspace(mystr[i]) || mystr[i]=='!')
                {
			printf("\n");
			count+=1;
			continue;
                }
		printf("%c",mystr[i]);
        }		
	return(count + 1);
}

int dispLongest(char *mystr)
{
	int i;
	int longest = 0;
	int si = 0;
	int ei = 0;
	int flag = 0;
	int start = 0;
	int count = 0; 

	for(i=0;mystr[i]!='\0';i++)
	{
		if(flag == 0)
		{
			start = i;
			flag = 1;
		}
		if(isspace(mystr[i]) || (mystr[i]=='.'))
                {
			if(count > longest)
			{
				ei = i - 1;
				si = start;
				longest = count;
			}
			flag = 0;
			count = 0;
			start = 0;
			continue;
		}
		count+=1;
	}
	for(i=si;i<=ei;i++)
	{
		printf("%c",mystr[i]);
	}
	return longest;
}	

void dispWords(char *mystr)
{
	int i;

	for(i=0;mystr[i]!='\0';i++)
	{
		if(isspace(mystr[i]))
		{
			continue;
		}
		else
		{
			printf("%c",mystr[i]);
		}
	}
}

int replacews(char *mystr)
{
	int count = 0;
	int i;

	for(i=0;mystr[i]!='\0';i++)
	{
		if(isspace(mystr[i]))
		{
			mystr[i] = '!';
			count+=1;
		}	
	}
	return count;
}

