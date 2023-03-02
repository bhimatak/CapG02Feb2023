#include<stdio.h>
#include<myheader.h>

void copystr(char *src,char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest='\0';
}

void updatestr(char *arr,char c,int index)
{
	*(arr+index)=c;
}

void concatstr(char *src,char *dest)
{
	int len=strlen(src);
	int i=0;

	while(*(dest+i) != '\0')
	{
		*(src+len+i)=*(dest+i);
		i++;
	}
	*(src+len+i)='\0';
}

void displaystr(char *arr)
{
	printf("\nArray of strings:");
	while(*arr != '\0')
	{
		printf("%c",*arr);
		arr++;
	}
	printf("\n\n");
}
			
