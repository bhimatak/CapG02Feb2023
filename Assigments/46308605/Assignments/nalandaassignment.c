#include<stdio.h>

void input_func(char []);
int word_count(char []);
void single_line_wspace(char []);
int replacews(char [], char);
int long_word(char []);
int main()
{
	char str[1024];
	int nOfWords=0,replacement=0,longword=0;
	char rep='!';
	input_func(str);
	nOfWords= word_count(str);
	printf("\nThere are %d words in the given sentence:\n",nOfWords);
	longword=long_word(str);
	printf("\nThe length of the longest word is %d:\n",longword);
	single_line_wspace(str);
	replacement=replacews(str,rep);
	printf("\nThere are %d replacements done:\n",replacement);
	return 0;
}
	void input_func(char str[])
	{
		printf("\nEnter the sentence:\n");
		fgets(str,1024,stdin);
	}
	int word_count(char str[])
	{
		int count=0,i;
	for(i=0;str[i]!= '\n';i++)
	{
		if(str[i]!=' ')
		{
			printf("%c",str[i]);
		}
		else
		{
			count++;
		}
	}
	return count+1;
	}
	void single_line_wspace(char str[])
	{
		int i;
		for(i=0;str[i]!='\n';i++)
		{
			if(str[i] == ' ')
			continue;
		else
		printf("%c",str[i]);
		}
	}
	int replacews(char str[], char rep)
	{
		int i=0,count=0;
		for(i=0;str[i]!='\n';i++)
		{
		if(str[i]==' ')
		{
			str[i]=rep;
			count++;
		}		
	}	
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
			if(length>max)
		{
			max=length;
			j=i-max;
		}
		printf("\n\nThe longest word is ");
		for(i=0;i<max ;i++)
		printf("%c",str[j+i]);
		return max;
	}
