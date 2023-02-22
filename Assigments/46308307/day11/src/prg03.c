#include<stdio.h>
#include<string.h>

void frequency(char *);

int main()
{
	char string[30];

	memset(string,'\0',30);
	printf("\nEnter the string:");
	scanf("%s",string);
	frequency(string);
	printf("\n\n");
	return 0;
}

void frequency(char *string)
{
	int freq[strlen(string)];
	int i,j;
	for(i=0;i<strlen(string);i++)
	{
		freq[i]=1;
		for(j=i+1;j<strlen(string);j++)
		{
			if(string[i]==string[j])
			{
				freq[i]++;
				string[j]='0';
			}
		}
	}
	printf("Frequency of unique characters in the string:\n");
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]!='\0' && string[i]!='0')
		{
			printf("%c-%d\n",string[i],freq[i]);
		}
	}
}
