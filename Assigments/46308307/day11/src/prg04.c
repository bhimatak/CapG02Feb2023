#include<stdio.h>
#include<ctype.h>
#include<string.h>

void alphaSorting(char *);

int main()
{
	char str[30];

	memset(str,'\0',30);
	printf("\nEnter the string:");
	scanf("%s",str);
	alphaSorting(str);
	printf("%s",str);
	printf("\n\n");
	return 0;
}

void alphaSorting(char *str)
{
	int i=0,j;
	char ch='\0',ch1='\0';
	while(str[i]!='\0')
	{
    	ch1=toupper(str[i]);
		str[i]=ch1;
		i++;
	}
	for(i=0;i<(strlen(str)-1);i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i] > str[j])
			{
				ch = str[i];
				str[i] = str[j];
				str[j] = ch; 
			}
		}
	}
}
