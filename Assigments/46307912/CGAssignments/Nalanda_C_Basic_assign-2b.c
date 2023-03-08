#include<stdio.h>
#include<string.h>

void input_func(char[]);
int word_count(char[]);
void single_line_wspace(char[]);
int replacews(char[], char);
int long_word(char[]);
void substr(char[],char[]);

int main()
{
	char str[1000];
	int nOfWords=0,replacement=0,longword=0;
	char rep='!';
	char substring[1000];
	input_func(str);
	nOfWords= word_count(str);
	printf("\nTotal words in the sentence are : %d\n",nOfWords);
	longword=long_word(str);
	printf("\n");
	printf("\nLength of the longest word is : %d\n",longword);
	printf("\n\nEnter the substring:");
	fgets(substring,1000,stdin);
	substr(str,substring);
	single_line_wspace(str);
	replacement=replacews(str,rep);
	printf("\nTotal replacements are : %d",replacement);
	return 0;
}


void input_func(char str[])
{
	printf("\nEnter the sentence : ");
	fgets(str,1000,stdin);
}

int word_count(char str[])
{
	int count=0,i;
	printf("\nWords in the given sentence are : \n\n");
	for(i=0;str[i]!= '\n';i++)
	{
		if(str[i]!=' ')
		{
			printf("%c",str[i]);
		}
		else
		{
			printf("\n");
			count++;
		}
	}
    printf("\n");
	return count+1;

}

void single_line_wspace(char str[])
{
	int i=0;
	printf("\nGiven sentence without spaces : ");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ')
			continue;

		else
			printf("%c",str[i]);
	}
	printf("\n");
}

int replacews(char str[], char rep)
{
	int i=0,count=0;
	printf("Sentence after replacing white spaces with ! : ");
	for(i=0;str[i]!='\n';i++)
	{
		if(str[i] == ' ')
		{
		    printf("!");
		    count++;
			continue;
		}
		else
			printf("%c",str[i]);
	}
	printf("\n");
	return count;
}

int long_word(char str[])
{
	int length=0,max=0,i=0,j=0;

	for(i=0;str[i]!='\n';i++)
	{
		if(str[i]!=' ')
		{
			length++;
		}

		else
		{
			if(length>max)
			{
				max=length;
				j=i-max;
			}

			length=0;
		}
				
	}
	/*if(length>max)
	{
		max=length;
		j=i-max;
	}*/
	printf("\nLongest word in the sentence : ");
	for(i=0;i<max ;i++)
		printf("%c",str[j+i]);

	return max;
}
		
void substr(char str[], char substring[])
{
	char *p;
	int i=0;
	int len=strlen(substring); 

	p= strstr(str,substring);
	
	if(p)
	{
		while(*(p+len+1)!='\n')
		{
			*(p)=*(p+len+1);

			p++;
		}
		while(*p!='\0')
		{

			*(p)='\0';
			p++;
		}

		printf("\n\n%s\n\n",str);
	}

	else
	{
		printf("\n\nNo substring found!!\n\n");
	}

}
